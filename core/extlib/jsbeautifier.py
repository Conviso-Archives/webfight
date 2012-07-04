#! /usr/bin/env python
# coding: utf-8

# 
# Author: marlonyao<yaolei135@gmail.com>
# ported from javascript versioned JS Beautifier, written by 
# einar(<einar@jsbeautifier.org>, http://jsbeautifier.org/).
#
import re

class Struct(object):
    """Create an instance with argument=value slots.
    This is for making a lightweight object whose class doesn't matter."""
    def __init__(self, **entries):
        self.__dict__.update(entries)

    def __cmp__(self, other):
        if isinstance(other, Struct):
            return cmp(self.__dict__, other.__dict__)
        else:
            return cmp(self.__dict__, other)

    def asdict(self):
        return self.__dict__

    def __repr__(self):
        args = ['%s=%s' % (k, repr(v)) for (k, v) in vars(self).items()]
        return 'Struct(%s)' % ', '.join(args)

class FlowException(Exception):
    pass

def js_beautify(js_source_text, options):
    ctx = Struct()
    input, output, token_text, last_type, last_text, last_last_text, last_word, ctx.flags, flag_store, indent_string = [None] * 10
    whitespace, wordchar, punct, ctx.parser_pos, line_starters, digits = [None] * 6
    prefix, token_type, ctx.do_block_just_closed = [None] * 3
    ctx.wanted_newline, ctx.just_added_newline, ctx.n_newlines = [None] * 3

    options = options or {}
    opt_braces_on_own_line = options.get('braces_on_own_line', False)
    opt_indent_size = options.get('indent_size', 4)
    opt_indent_char = options.get('indent_char', ' ')
    opt_preserve_newlines = options.get('preserve_newlines', True)
    opt_indent_level = options.get('indent_level', 0)            # starting indentation
    opt_space_after_anon_function = options.get('space_after_anon_function', False)
    opt_keep_array_indentation = options.get('keep_array_indentation', True)

    ctx.just_added_newline = False

    # cache the source's length.
    input_length = len(js_source_text)

    def trim_output():
        while output and output[-1] in [' ', indent_string]:
            output.pop()

    def is_array(mode):
        return mode == '[EXPRESSION]' or mode == '[INDENTED-EXPRESSION]'


    def print_newline(ignore_repeated=True):
        ctx.flags.eat_next_space = False
        if (opt_keep_array_indentation and is_array(ctx.flags.mode)):
            return

        ctx.flags.if_line = False
        trim_output()

        if not output:         # no newline on start of file
            return      

        if output[-1] != "\n" or not ignore_repeated:
            ctx.just_added_newline = True
            output.append("\n")

        output.extend([indent_string] * (ctx.flags.indentation_level + (ctx.flags.var_line and ctx.flags.var_line_reindented)))


    def print_single_space():
        if ctx.flags.eat_next_space:
            ctx.flags.eat_next_space = False
            return
        last_output = ' '
        if output:
            last_output = output[-1]
            if last_output not in (' ', '\n', indent_string):       # prevent occassional duplicate space
                output.append(' ')


    def print_token():
        ctx.just_added_newline = False
        ctx.flags.eat_next_space = False
        output.append(token_text)

    def indent():
        ctx.flags.indentation_level += 1

    def remove_indent():
        if output and output[-1] == indent_string:
            output.pop()

    def set_mode(mode):
        if ctx.flags:
            flag_store.append(ctx.flags)
            indentation_level = ctx.flags.indentation_level + (ctx.flags.var_line and ctx.flags.var_line_reindented)
            previous_mode = ctx.flags.mode
        else:
            indentation_level = opt_indent_level
            previous_mode = 'BLOCK'

        ctx.flags = Struct(
            previous_mode=previous_mode,
            mode=mode,
            var_line=False,
            var_line_tainted=False,
            var_line_reindented=False,
            in_html_comment=False,
            if_line=False,
            in_case=False,
            eat_next_space=False,
            indentation_baseline=-1,
            indentation_level=indentation_level,
        )

    def is_expression(mode):
        return mode in ['[EXPRESSION]', '[INDENTED-EXPRESSION]', '(EXPRESSION)']

    def restore_mode():
        ctx.do_block_just_closed = ctx.flags.mode == 'DO_BLOCK'
        if flag_store:
            ctx.flags = flag_store.pop()


    def in_array(what, arr):
        return what in arr

    # Walk backwards from the colon to find a '?' (colon is part of a ternary op)
    # or a '{' (colon is part of a class literal).  Along the way, keep track of
    # the blocks and expressions we pass so we only trigger on those chars in our
    # own level, and keep track of the colons so we only trigger on the matching '?'.


    def is_ternary_op():
        level, colon_count = 0, 0
        for s in reversed(output):
            if s == ':':
                if level == 0:
                    colon_count += 1
            elif s == '?':
                if level == 0:
                    if colon_count == 0:
                        return True
                    else:
                        colon_count -= 1
            elif s == '{':
                if level == 0:
                    return False
                level -= 1
            elif s == '(' or s == '[':
                level -= 1
            elif s == ')' or s == ']' or s == '}':
                level += 1

    def get_next_token():
        ctx.n_newlines = 0

        if ctx.parser_pos >= input_length:
            return ['', 'TK_EOF']

        ctx.wanted_newline = False

        c = input[ctx.parser_pos]
        ctx.parser_pos += 1

        keep_whitespace = opt_keep_array_indentation and is_array(ctx.flags.mode)

        if keep_whitespace:
            #
            # slight mess to allow nice preservation of array indentation and reindent that correctly
            # first time when we get to the arrays:
            # var a = [
            # ....'something'
            # we make note of whitespace_count = 4 into flags.indentation_baseline
            # so we know that 4 whitespaces in original source match indent_level of reindented source
            #
            # and afterwards, when we get to
            #    'something,
            # .......'something else'
            # we know that this should be indented to indent_level + (7 - indentation_baseline) spaces
            #
            whitespace_count = 0

            while in_array(c, whitespace):
                if c == '\n':
                    trim_output()
                    output.append('\n')
                    ctx.just_added_newline = True
                    whitespace_count = 0
                else:
                    if c == '\t':
                        whitespace_count += 4
                    else:
                        whitespace_count += 1

                if ctx.parser_pos >= input_length:
                    return ['', 'TK_EOF']

                c = input[ctx.parser_pos]
                ctx.parser_pos += 1

            if ctx.flags.indentation_baseline == -1:
                ctx.flags.indentation_baseline = whitespace_count

            if ctx.just_added_newline:
                for i in range(0, ctx.flags.indentation_level + 1):
                    output.append(indent_string)
                if ctx.flags.indentation_baseline != -1:
                    output.extend([' '] * (whitespace_count - ctx.flags.indentation_baseline))
        else:
            while in_array(c, whitespace):
                if c == '\n':
                    ctx.n_newlines += 1

                if ctx.parser_pos >= input_length:
                    return ['', 'TK_EOF']

                c = input[ctx.parser_pos]
                ctx.parser_pos += 1

            if opt_preserve_newlines:
                if ctx.n_newlines > 1:
                    for i in range(0, ctx.n_newlines):
                        print_newline(i == 0)
                        ctx.just_added_newline = True
            ctx.wanted_newline = ctx.n_newlines > 0

        if in_array(c, wordchar):
            if ctx.parser_pos < input_length:
                while in_array(input[ctx.parser_pos], wordchar):
                    c += input[ctx.parser_pos]
                    ctx.parser_pos += 1
                    if ctx.parser_pos == input_length:
                        break

            # small and surprisingly unugly hack for 1E-10 representation
            if ctx.parser_pos != input_length and re.compile(r'^[0-9]+[Ee]$').match(c) and (input[ctx.parser_pos] == '-' or input[ctx.parser_pos] == '+'):

                sign = input[ctx.parser_pos]
                ctx.parser_pos += 1

                #t = get_next_token(ctx.parser_pos)
                t = get_next_token()
                #print 'get_next_token: %s' % t
                c += sign + t[0]
                return [c, 'TK_WORD']

            if c == 'in': # hack for 'in' operator
                return [c, 'TK_OPERATOR']

            if ctx.wanted_newline and last_type != 'TK_OPERATOR' and not ctx.flags.if_line and (opt_preserve_newlines or last_text != 'var'):
                print_newline()
            return [c, 'TK_WORD']

        if c == '(' or c == '[':
            return [c, 'TK_START_EXPR']

        if c == ')' or c == ']':
            return [c, 'TK_END_EXPR']

        if c == '{':
            return [c, 'TK_START_BLOCK']

        if c == '}':
            return [c, 'TK_END_BLOCK']

        if c == ';':
            return [c, 'TK_SEMICOLON']

        if c == '/':
            comment = ''
            # peek for comment /* ... */
            inline_comment = True
            if input[ctx.parser_pos] == '*':
                ctx.parser_pos += 1
                if ctx.parser_pos < input_length:
                    while not (input[ctx.parser_pos] == '*' and input[ctx.parser_pos + 1] and input[ctx.parser_pos + 1] == '/') and ctx.parser_pos < input_length:
                        c = input[ctx.parser_pos]
                        comment += c
                        if c == '\x0d' or c == '\x0a':
                            inline_comment = False
                        ctx.parser_pos += 1
                        if ctx.parser_pos >= input_length:
                            break
                ctx.parser_pos += 2
                if inline_comment:
                    return ['/*' + comment + '*/', 'TK_INLINE_COMMENT']
                else:
                    return ['/*' + comment + '*/', 'TK_BLOCK_COMMENT']
            # peek for comment // ...
            if input[ctx.parser_pos] == '/':
                comment = c
                while input[ctx.parser_pos] != "\x0d" and input[ctx.parser_pos] != "\x0a":
                    comment += input[ctx.parser_pos]
                    ctx.parser_pos += 1
                    if ctx.parser_pos >= input_length:
                        break
                ctx.parser_pos += 1
                if ctx.wanted_newline:
                    print_newline()
                return [comment, 'TK_COMMENT']

        if (c == "'" or # string
            c == '"' or # string
            (c == '/' and ((last_type == 'TK_WORD' and in_array(last_text, ['return', 'do'])) or (last_type == 'TK_START_EXPR' or last_type == 'TK_START_BLOCK' or last_type == 'TK_END_BLOCK' or last_type == 'TK_OPERATOR' or last_type == 'TK_EQUALS' or last_type == 'TK_EOF' or last_type == 'TK_SEMICOLON')))): # regexp
            sep = c
            esc = False
            resulting_string = c

            if ctx.parser_pos < input_length:
                if sep == '/':
                   # 
                   #  handle regexp separately...
                   # 
                    in_char_class = False
                    while esc or in_char_class or input[ctx.parser_pos] != sep:
                        resulting_string += input[ctx.parser_pos]
                        if not esc:
                            esc = input[ctx.parser_pos] == '\\'
                            if input[ctx.parser_pos] == '[':
                                in_char_class = True
                            elif input[ctx.parser_pos] == ']':
                                in_char_class = False
                        else:
                            esc = False
                        ctx.parser_pos += 1
                        if ctx.parser_pos >= input_length:
                            # incomplete string/rexp when end-of-file reached. 
                            # bail out with what had been received so far.
                            return [resulting_string, 'TK_STRING']

                else:
                    # 
                    #  and handle string also separately
                    # 
                    while esc or input[ctx.parser_pos] != sep:
                        resulting_string += input[ctx.parser_pos]
                        if not esc:
                            esc = input[ctx.parser_pos] == '\\'
                        else:
                            esc = False
                        ctx.parser_pos += 1
                        if ctx.parser_pos >= input_length:
                            # incomplete string/rexp when end-of-file reached. 
                            # bail out with what had been received so far.
                            return [resulting_string, 'TK_STRING']

            ctx.parser_pos += 1

            resulting_string += sep

            if sep == '/':
                # regexps may have modifiers /regexp/MOD , so fetch those, too
                while ctx.parser_pos < input_length and in_array(input[ctx.parser_pos], wordchar):
                    resulting_string += input[ctx.parser_pos]
                    ctx.parser_pos += 1
            return [resulting_string, 'TK_STRING']

        if c == '#': 
            # Spidermonkey-specific sharp variables for circular references
            # https://developer.mozilla.org/En/Sharp_variables_in_JavaScript
            # http://mxr.mozilla.org/mozilla-central/source/js/src/jsscan.cpp around line 1935
            sharp = '#'
            if ctx.parser_pos < input_length and in_array(input[ctx.parser_pos], digits):
                while True:
                    c = input[ctx.parser_pos]
                    sharp += c
                    ctx.parser_pos += 1
                    if not (ctx.parser_pos < input_length and c != '#' and c != '='):
                        break
                if c == '#' or ctx.parser_pos >= input_length:
                    pass
                elif input[ctx.parser_pos] == '[' and ctx.parser_pos < input_length-1 and input[ctx.parser_pos + 1] == ']':
                    sharp += '[]'
                    ctx.parser_pos += 2
                elif input[ctx.parser_pos] == '{' and ctx.parser_pos < input_length-1 and input[ctx.parser_pos + 1] == '}':
                    sharp += '{}'
                    ctx.parser_pos += 2
                return [sharp, 'TK_WORD']

        if c == '<' and input[ctx.parser_pos-1:ctx.parser_pos+3] == '<!--':
            ctx.parser_pos += 3
            ctx.flags.in_html_comment = True
            return ['<!--', 'TK_COMMENT']

        if c == '-' and ctx.flags.in_html_comment and input[ctx.parser_pos-1:ctx.parser_pos+2] == '-->':
            ctx.flags.in_html_comment = False
            ctx.parser_pos += 2
            if ctx.wanted_newline:
                print_newline()
            return ['-->', 'TK_COMMENT']

        if in_array(c, punct): 
            while ctx.parser_pos < input_length and in_array(c + input[ctx.parser_pos], punct):
                c += input[ctx.parser_pos]
                ctx.parser_pos += 1
                if ctx.parser_pos >= input_length:
                    break

            if c == '=':
                return [c, 'TK_EQUALS']
            else:
                return [c, 'TK_OPERATOR']

        return [c, 'TK_UNKNOWN']

    #----------------------------------
    indent_string = ''
    while opt_indent_size > 0:
        indent_string += opt_indent_char
        opt_indent_size -= 1

    input = js_source_text

    last_word = ''; # last 'TK_WORD' passed
    last_type = 'TK_START_EXPR'; # last token type
    last_text = ''; # last token text
    last_last_text = ''; # pre-last token text
    output = []

    ctx.do_block_just_closed = False

    whitespace = "\n\r\t "
    wordchar = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_$'
    digits = '0123456789'

    punct = '+ - * / % & ++ -- = += -= *= /= %= == === != !== > < >= <= >> << >>> >>>= >>= <<= && &= | || ! !! , : ? ^ ^= |= ::'.split(' ')

    # words which should always start on new line.
    line_starters = 'continue,try,throw,return,var,if,switch,case,default,for,while,break,function'.split(',')

    # states showing if we are currently in expression (i.e. "if" case) - 'EXPRESSION', or in usual block (like, procedure), 'BLOCK'.
    # some formatting depends on that.
    flag_store = []
    set_mode('BLOCK')

    ctx.parser_pos = 0
    while True:
        t = get_next_token()
        #print 'get_next_token: %s' % t
        token_text = t[0]
        token_type = t[1]
        if token_type == 'TK_EOF':
            break

        #switch (token_type) {

        try:
            if token_type == 'TK_START_EXPR':
                if token_text == '[':
                    if last_type == 'TK_WORD' or last_text == ')':
                        # this is array index specifier, break immediately
                        # a[x], fn()[x]
                        if (in_array(last_text, line_starters)):
                            print_single_space()
                        set_mode('(EXPRESSION)')
                        print_token()
                        raise FlowException()
                    if ctx.flags.mode == '[EXPRESSION]' or ctx.flags.mode == '[INDENTED-EXPRESSION]':
                        if last_last_text == ']' and last_text == ',':
                            # ], [ goes to new line
                            if ctx.flags.mode == '[EXPRESSION]':
                                ctx.flags.mode = '[INDENTED-EXPRESSION]'
                                if not opt_keep_array_indentation:
                                    indent()
                            set_mode('[EXPRESSION]')
                            if not opt_keep_array_indentation:
                                print_newline()
                        elif last_text == '[':
                            if ctx.flags.mode == '[EXPRESSION]':
                                ctx.flags.mode = '[INDENTED-EXPRESSION]'
                                if not opt_keep_array_indentation:
                                    indent()
                            set_mode('[EXPRESSION]')

                            if not opt_keep_array_indentation:
                                print_newline()
                        else:
                            set_mode('[EXPRESSION]')
                    else:
                        set_mode('[EXPRESSION]')
                else:
                    set_mode('(EXPRESSION)')

                if last_text == ';' or last_type == 'TK_START_BLOCK':
                    print_newline()
                elif last_type == 'TK_END_EXPR' or last_type == 'TK_START_EXPR' or last_type == 'TK_END_BLOCK' or last_text == '.':
                    # do nothing on (( and )( and ][ and ]( and .(
                    pass
                elif last_type != 'TK_WORD' and last_type != 'TK_OPERATOR':
                    print_single_space()
                elif last_word == 'function':
                    # function() vs function ()
                    if opt_space_after_anon_function:
                        print_single_space()
                elif in_array(last_text, line_starters) or last_text == 'catch':
                    print_single_space()
                print_token()

            elif token_type == 'TK_END_EXPR':
                if token_text == ']':
                    if opt_keep_array_indentation:
                        if last_text == '}':
                            # trim_output()
                            # print_newline(True)
                            remove_indent()
                            print_token()
                            restore_mode()
                            # hack: jump flow
                            raise FlowException()
                    else:
                        if ctx.flags.mode == '[INDENTED-EXPRESSION]':
                            if last_text == ']':
                                restore_mode()
                                print_newline()
                                print_token()
                                # hack: jump flow
                                raise FlowException()
                restore_mode()
                print_token()
            elif token_type == 'TK_START_BLOCK':
                if last_word == 'do':
                    set_mode('DO_BLOCK')
                else:
                    set_mode('BLOCK')
                if opt_braces_on_own_line:
                    if last_type != 'TK_OPERATOR':
                        if last_text == 'return':
                            print_single_space()
                        else:
                            print_newline(True)
                    print_token()
                    indent()
                else:
                    if last_type != 'TK_OPERATOR' and last_type != 'TK_START_EXPR':
                        if last_type == 'TK_START_BLOCK':
                            print_newline()
                        else:
                            print_single_space()
                    else:
                        # if TK_OPERATOR or TK_START_EXPR
                        if is_array(ctx.flags.previous_mode) and last_text == ',':
                            print_newline();    # [a, b, c, {
                    indent()
                    print_token()
                    
            elif token_type == 'TK_END_BLOCK':
                restore_mode()
                if opt_braces_on_own_line:
                    print_newline()
                    print_token()
                else:
                    if last_type == 'TK_START_BLOCK':
                        # nothing
                        if ctx.just_added_newline:
                            remove_indent()
                        else:
                            # {}
                            trim_output()
                    else:
                        print_newline()
                    print_token()
            elif token_type == 'TK_WORD':
                # no, it's not you. even I have problems understanding how this works
                # and what does what.
                if ctx.do_block_just_closed:
                    
                    # do {} ## while ()
                    print_single_space()
                    print_token()
                    print_single_space()
                    ctx.do_block_just_closed = False
                    # hack: jump to end of switch
                    raise FlowException()

                if token_text == 'function':
                    if (ctx.just_added_newline or last_text == ';') and last_text != '{':
                        # make sure there is a nice clean space of at least one blank line
                        # before a new function definition
                        if not ctx.just_added_newline:
                            ctx.n_newlines = 0
                            
                        for i in range(0, 2-ctx.n_newlines):
                            print_newline(False)

                if token_text == 'case' or token_text == 'default':
                    if last_text == ':':
                        # switch cases following one another
                        remove_indent()
                    else:
                        # case statement starts in the same line where switch
                        ctx.flags.indentation_level -= 1
                        print_newline()
                        ctx.flags.indentation_level += 1
                    print_token()
                    ctx.flags.in_case = True
                    # hack: jump to end of switch
                    raise FlowException()

                
                prefix = 'NONE'

                if last_type == 'TK_END_BLOCK':
                    if not in_array(token_text.lower(), ['else', 'catch', 'finally']):
                        prefix = 'NEWLINE'
                    else:
                        if opt_braces_on_own_line:
                            prefix = 'NEWLINE'
                        else:
                            prefix = 'SPACE'
                            print_single_space()
                elif last_type == 'TK_SEMICOLON' and (ctx.flags.mode == 'BLOCK' or ctx.flags.mode == 'DO_BLOCK'):
                    prefix = 'NEWLINE'
                elif last_type == 'TK_SEMICOLON' and is_expression(ctx.flags.mode):
                    prefix = 'SPACE'
                elif last_type == 'TK_STRING':
                    prefix = 'NEWLINE'
                elif last_type == 'TK_WORD':
                    prefix = 'SPACE'
                elif last_type == 'TK_START_BLOCK':
                    prefix = 'NEWLINE'
                elif last_type == 'TK_END_EXPR':
                    print_single_space()
                    prefix = 'NEWLINE'

                if last_type != 'TK_END_BLOCK' and in_array(token_text.lower(), ['else', 'catch', 'finally']):
                    print_newline()
                elif in_array(token_text, line_starters) or prefix == 'NEWLINE':
                    if last_text == 'else':
                        # no need to force newline on else break
                        print_single_space()
                    elif (last_type == 'TK_START_EXPR' or last_text == '=' or last_text == ',') and token_text == 'function':
                        # no need to force newline on 'function': (function
                        # DONOTHING
                        pass
                    elif last_text == 'return' or last_text == 'throw':
                        # no newline between 'return nnn'
                        print_single_space()
                    elif last_type != 'TK_END_EXPR':
                        if (last_type != 'TK_START_EXPR' or token_text != 'var') and last_text != ':':
                            # no need to force newline on 'var': for (var x = 0...)
                            if token_text == 'if' and last_word == 'else' and last_text != '{':
                                # no newline for } else if {
                                print_single_space()
                            else:
                                print_newline()
                    else:
                        if in_array(token_text, line_starters) and last_text != ')':
                            print_newline()
                elif prefix == 'SPACE':
                    print_single_space()
                
                print_token()
                last_word = token_text

                if token_text == 'var':
                    ctx.flags.var_line = True
                    ctx.flags.var_line_reindented = False
                    ctx.flags.var_line_tainted = False

                if token_text == 'if' or token_text == 'else':
                    ctx.flags.if_line = True
            elif token_type == 'TK_SEMICOLON':
                print_token()
                ctx.flags.var_line = False
                ctx.flags.var_line_reindented = False
            elif token_type == 'TK_STRING':
                if last_type == 'TK_START_BLOCK' or last_type == 'TK_END_BLOCK' or last_type == 'TK_SEMICOLON':
                    print_newline()
                elif last_type == 'TK_WORD':
                    print_single_space()
                print_token()
            elif token_type == 'TK_EQUALS':
                if ctx.flags.var_line:
                    # just got an '=' in a var-line, different formatting/line-breaking, etc will now be done
                    ctx.flags.var_line_tainted = True
                print_single_space()
                print_token()
                print_single_space()
            elif token_type == 'TK_OPERATOR':
                space_before = True
                space_after = True

                if ctx.flags.var_line and token_text == ',' and (is_expression(ctx.flags.mode)):
                    # do not break on comma, for(var a = 1, b = 2)
                    ctx.flags.var_line_tainted = False

                if ctx.flags.var_line:
                    if token_text == ',':
                        if ctx.flags.var_line_tainted:
                            print_token()
                            ctx.flags.var_line_reindented = True
                            ctx.flags.var_line_tainted = False
                            print_newline()
                            # hack: jump to end of switch case
                            raise FlowException()
                        else:
                            ctx.flags.var_line_tainted = False
                    # } else if (token_text === ':') {
                        # hmm, when does this happen? tests don't catch this
                        # ctx.flags.var_line = False

                if last_text == 'return' or last_text == 'throw':
                    # "return" had a special handling in TK_WORD. Now we need to return the favor
                    print_single_space()
                    print_token()
                    # hack:jump to end of switch
                    raise FlowException()

                if token_text == ':' and ctx.flags.in_case:
                    print_token(); # colon really asks for separate treatment
                    print_newline()
                    ctx.flags.in_case = False
                    # hack: jump to end of switch
                    raise FlowException()

                if token_text == '::':
                    # no spaces around exotic namespacing syntax operator
                    print_token()
                    # hack: jump to end of switch
                    raise FlowException()

                if token_text == ',':
                    if ctx.flags.var_line:
                        if ctx.flags.var_line_tainted:
                            print_token()
                            print_newline()
                            ctx.flags.var_line_tainted = False
                        else:
                            print_token()
                            print_single_space()
                    elif last_type == 'TK_END_BLOCK' and ctx.flags.mode != "(EXPRESSION)":
                        print_token()
                        print_newline()
                    else:
                        if ctx.flags.mode == 'BLOCK':
                            print_token()
                            print_newline()
                        else:
                            # EXPR or DO_BLOCK
                            print_token()
                            print_single_space()
                    # hack: jump to end of switch
                    raise FlowException()
                elif in_array(token_text, ['--', '++', '!']) or (in_array(token_text, ['-', '+']) and (in_array(last_type, ['TK_START_BLOCK', 'TK_START_EXPR', 'TK_EQUALS', 'TK_OPERATOR']) or in_array(last_text, line_starters))): 
                    # unary operators (and binary +/- pretending to be unary) special cases

                    space_before = False
                    space_after = False

                    if last_text == ';' and is_expression(ctx.flags.mode):
                        # for (;; ++i)
                        #        ^^^
                        space_before = True
                    if last_type == 'TK_WORD' and in_array(last_text, line_starters):
                        space_before = True

                    if ctx.flags.mode == 'BLOCK' and (last_text == '{' or last_text == ';'):
                        # { foo; --i }
                        # foo(); --bar
                        print_newline()
                elif token_text == '.':
                    # decimal digits or object.property
                    space_before = False
                elif token_text == ':':
                    if not is_ternary_op():
                        space_before = False
                if space_before:
                    print_single_space()

                print_token()

                if space_after:
                    print_single_space()

                if token_text == '!':
                    # ctx.flags.eat_next_space = True
                    pass
            elif token_type == 'TK_BLOCK_COMMENT':
                lines = re.compile(r'\x0a|\x0d\x0a').split(token_text)

                if re.compile(r'^\/\*\*').match(token_text):
                    # javadoc: reformat and reindent
                    print_newline()
                    output.append(lines[0])
                    for i in range(1, len(lines)):
                        print_newline()
                        output.append(' ')
                        output.append(re.compile(r'^\s\s*|\s\s*$').sub('', lines[i]))
                        #output.append(lines[i].replace(re.compile(r'^\s\s*|\s\s*$', ''))
                else:
                    # simple block comment: leave intact
                    if len(lines) > 1:
                        # multiline comment block starts with a new line
                        print_newline()
                        trim_output()
                    else:
                        # single-line /* comment */ stays where it is
                        print_single_space()
                    for i in range(0, len(lines)):
                        output.append(lines[i])
                        output.append('\n')
                print_newline()
            elif token_type == 'TK_INLINE_COMMENT':
                print_single_space()
                print_token()
                if is_expression(ctx.flags.mode):
                    print_single_space()
                else:
                    print_newline()
            elif token_type == 'TK_COMMENT':
                # print_newline()
                if ctx.wanted_newline:
                    print_newline()
                else:
                    print_single_space()
                print_token()
                print_newline()
            elif token_type == 'TK_UNKNOWN':
                print_token()
        except FlowException:
            pass
        
        last_last_text = last_text
        last_type = token_type
        last_text = token_text

    return re.compile(r'[\n ]+$').sub('', ''.join(output))


if __name__ == '__main__':
    import optparse
    import urllib2
    
    def main():
        parser = optparse.OptionParser(usage='usage: %prog [options] [file || URL]')

        parser.add_option('-i', default=4, type='int', dest='indent', metavar='INDENT', help='Indent size (1 for TAB)')
        parser.add_option('-b', default=False, action='store_true', dest='braces_on_own_line', help='Put braces on own line (Allman / ANSI style)')
        parser.add_option('-a', default=True, action='store_false', dest='keep_array_indentation', help='Indent arrays')
        parser.add_option('-n', default=False, action='store_true', dest='preserve_newlines', help='Preserve newlines')
        parser.add_option('-p', default=False, action='store_true', dest='jslint_pedantic', help='JSLint-pedantic mode, currently only adds space between "function ()"')
        opts, args = parser.parse_args()
    
        if not args:
            parser.print_help()
            return
        
        # construct flags
        flags = dict(
            indent_size=opts.indent,
            indent_char=' ',
            preserve_newlines=opts.preserve_newlines,
            space_after_anon_function=opts.jslint_pedantic,
            keep_array_indentation=opts.keep_array_indentation,
        )
        if opts.indent == 1:
            flags['indent_char'] = '\t'
        for f in args:
            if f.startswith('http:') or f.startswith('https:'):
                f = urllib2.urlopen(f)
            else:
                f = open(f)
            content = f.read()
            print js_beautify(content, flags)
            f.close()
    main()
