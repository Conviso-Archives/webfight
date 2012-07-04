/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MOVIENAME = 258,
     STRING = 259,
     HEX = 260,
     FLOAT = 261,
     DOUBLE = 262,
     TRUEVAL = 263,
     FALSEVAL = 264,
     NULLVAL = 265,
     UNDEFVAL = 266,
     LABEL = 267,
     INTEGER = 268,
     CONSTANT = 269,
     MOVIE = 270,
     COMPRESSED = 271,
     PROTECT = 272,
     SCRIPTLIMITS = 273,
     RECURSION = 274,
     TIMEOUT = 275,
     ENABLEDEBUGGER = 276,
     ENABLEDEBUGGER2 = 277,
     FRAME = 278,
     PLACEMOVIECLIP = 279,
     DEFINEMOVIECLIP = 280,
     INITMOVIECLIP = 281,
     DEFINEBUTTON = 282,
     ON = 283,
     ONCLIPEVENT = 284,
     AS = 285,
     IMPORTASSETS = 286,
     EXPORTASSETS = 287,
     METADATA = 288,
     FILEATTRIBUTES = 289,
     FROM = 290,
     _NAN = 291,
     POSITIVE_INFINITY = 292,
     NEGATIVE_INFINITY = 293,
     _NANF = 294,
     POSITIVE_INFINITYF = 295,
     NEGATIVE_INFINITYF = 296,
     BIDLETOOVERUP = 297,
     BOVERUPTOIDLE = 298,
     BOVERUPTOOVERDOWN = 299,
     BOVERDOWNTOOVERUP = 300,
     BOVERDOWNTOOUTDOWN = 301,
     BOUTDOWNTOOVERDOWN = 302,
     BOUTDOWNTOIDLE = 303,
     BIDLETOOVERDOWN = 304,
     BOVERDOWNTOIDLE = 305,
     KEYPRESS = 306,
     _LEFT = 307,
     _RIGHT = 308,
     _HOME = 309,
     _END = 310,
     _INSERT = 311,
     _DELETE = 312,
     _BACKSPACE = 313,
     _ENTER = 314,
     _UP = 315,
     _DOWN = 316,
     _PAGEUP = 317,
     _PAGEDOWN = 318,
     _TAB = 319,
     _ESCAPE = 320,
     _SPACE = 321,
     MCLOAD = 322,
     MCENTERFRAME = 323,
     MCUNLOAD = 324,
     MCMOUSEMOVE = 325,
     MCMOUSEDOWN = 326,
     MCMOUSEUP = 327,
     MCKEYDOWN = 328,
     MCKEYUP = 329,
     MCINITIALIZE = 330,
     MCCONSTRUCT = 331,
     MCDATA = 332,
     MCPRESS = 333,
     MCRELEASE = 334,
     MCRELEASEOUTSIDE = 335,
     MCROLLOVER = 336,
     MCROLLOUT = 337,
     MCDRAGOVER = 338,
     MCDRAGOUT = 339,
     X_PROPERTY = 340,
     Y_PROPERTY = 341,
     XSCALE_PROPERTY = 342,
     YSCALE_PROPERTY = 343,
     WIDTH_PROPERTY = 344,
     HEIGHT_PROPERTY = 345,
     ALPHA_PROPERTY = 346,
     VISIBLE_PROPERTY = 347,
     ROTATION_PROPERTY = 348,
     CURRENTFRAME_PROPERTY = 349,
     TOTALFRAMES_PROPERTY = 350,
     TARGET_PROPERTY = 351,
     FRAMESLOADED_PROPERTY = 352,
     NAME_PROPERTY = 353,
     DROPTARGET_PROPERTY = 354,
     URL_PROPERTY = 355,
     QUALITY_PROPERTY = 356,
     XMOUSE_PROPERTY = 357,
     YMOUSE_PROPERTY = 358,
     HIGHQUALITY_PROPERTY = 359,
     FOCUSRECT_PROPERTY = 360,
     SOUNDBUFTIME_PROPERTY = 361,
     NEXTFRAME = 362,
     PREVFRAME = 363,
     GOTOFRAME = 364,
     GOTOLABEL = 365,
     PLAY = 366,
     STOP = 367,
     TOGGLEQUALITY = 368,
     STOPSOUNDS = 369,
     FUNCTION = 370,
     FUNCTION2 = 371,
     CONSTANTPOOL = 372,
     END = 373,
     DUP = 374,
     SWAP = 375,
     POP = 376,
     WITH = 377,
     PUSH = 378,
     SETREGISTER = 379,
     CALLFUNCTION = 380,
     RETURN = 381,
     NEWMETHOD = 382,
     CALLMETHOD = 383,
     BITWISEAND = 384,
     BITWISEOR = 385,
     BITWISEXOR = 386,
     MODULO = 387,
     NEWADD = 388,
     NEWLESSTHAN = 389,
     NEWEQUALS = 390,
     TONUMBER = 391,
     TOSTRING = 392,
     INCREMENT = 393,
     DECREMENT = 394,
     TYPEOF = 395,
     TARGETPATH = 396,
     ENUMERATE = 397,
     ENUMERATEVALUE = 398,
     INSTANCEOF = 399,
     DELETE = 400,
     DELETE2 = 401,
     NEW = 402,
     INITARRAY = 403,
     INITOBJECT = 404,
     GETMEMBER = 405,
     SETMEMBER = 406,
     SHIFTLEFT = 407,
     SHIFTRIGHT = 408,
     SHIFTRIGHT2 = 409,
     VAR = 410,
     VAREQUALS = 411,
     OLDADD = 412,
     SUBTRACT = 413,
     MULTIPLY = 414,
     DIVIDE = 415,
     OLDEQUALS = 416,
     OLDLESSTHAN = 417,
     STRICTEQUALS = 418,
     GREATERTHAN = 419,
     LOGICALAND = 420,
     LOGICALOR = 421,
     LOGICALNOT = 422,
     STRINGEQ = 423,
     STRINGLENGTH = 424,
     SUBSTRING = 425,
     INT = 426,
     GETVARIABLE = 427,
     SETVARIABLE = 428,
     SETTARGET = 429,
     SETTARGETEXPR = 430,
     STRINGCONCAT = 431,
     GETPROPERTY = 432,
     SETPROPERTY = 433,
     DUPLICATECLIP = 434,
     REMOVECLIP = 435,
     TRACE = 436,
     STARTDRAGMOVIE = 437,
     STOPDRAGMOVIE = 438,
     STRINGLESSTHAN = 439,
     STRINGGREATERTHAN = 440,
     RANDOM = 441,
     MBLENGTH = 442,
     ORD = 443,
     CHR = 444,
     GETTIMER = 445,
     MBSUBSTRING = 446,
     MBORD = 447,
     MBCHR = 448,
     BRANCHALWAYS = 449,
     GETURL = 450,
     GETURL2 = 451,
     LOADMOVIE = 452,
     LOADMOVIENUM = 453,
     LOADVARIABLES = 454,
     LOADVARIABLESNUM = 455,
     POST = 456,
     GET = 457,
     BRANCHIFTRUE = 458,
     CALLFRAME = 459,
     GOTOANDPLAY = 460,
     GOTOANDSTOP = 461,
     SKIP = 462,
     IFFRAMELOADEDEXPR = 463,
     IFFRAMELOADED = 464,
     ELSE = 465,
     STRICTMODE = 466,
     OFF = 467,
     IMPLEMENTS = 468,
     EXTENDS = 469,
     THROW = 470,
     CAST = 471,
     TRY = 472,
     CATCH = 473,
     FINALLY = 474,
     FSCOMMAND2 = 475,
     REGISTER = 476,
     ATTRUSENETWORK = 477,
     ATTRRELATIVEURLS = 478,
     ATTRSUPPRESSCROSSDOMAINCACHE = 479,
     ATTRACTIONSCRIPT3 = 480,
     ATTRHASMETADATA = 481,
     SWFACTION = 482,
     HEXDATA = 483
   };
#endif
/* Tokens.  */
#define MOVIENAME 258
#define STRING 259
#define HEX 260
#define FLOAT 261
#define DOUBLE 262
#define TRUEVAL 263
#define FALSEVAL 264
#define NULLVAL 265
#define UNDEFVAL 266
#define LABEL 267
#define INTEGER 268
#define CONSTANT 269
#define MOVIE 270
#define COMPRESSED 271
#define PROTECT 272
#define SCRIPTLIMITS 273
#define RECURSION 274
#define TIMEOUT 275
#define ENABLEDEBUGGER 276
#define ENABLEDEBUGGER2 277
#define FRAME 278
#define PLACEMOVIECLIP 279
#define DEFINEMOVIECLIP 280
#define INITMOVIECLIP 281
#define DEFINEBUTTON 282
#define ON 283
#define ONCLIPEVENT 284
#define AS 285
#define IMPORTASSETS 286
#define EXPORTASSETS 287
#define METADATA 288
#define FILEATTRIBUTES 289
#define FROM 290
#define _NAN 291
#define POSITIVE_INFINITY 292
#define NEGATIVE_INFINITY 293
#define _NANF 294
#define POSITIVE_INFINITYF 295
#define NEGATIVE_INFINITYF 296
#define BIDLETOOVERUP 297
#define BOVERUPTOIDLE 298
#define BOVERUPTOOVERDOWN 299
#define BOVERDOWNTOOVERUP 300
#define BOVERDOWNTOOUTDOWN 301
#define BOUTDOWNTOOVERDOWN 302
#define BOUTDOWNTOIDLE 303
#define BIDLETOOVERDOWN 304
#define BOVERDOWNTOIDLE 305
#define KEYPRESS 306
#define _LEFT 307
#define _RIGHT 308
#define _HOME 309
#define _END 310
#define _INSERT 311
#define _DELETE 312
#define _BACKSPACE 313
#define _ENTER 314
#define _UP 315
#define _DOWN 316
#define _PAGEUP 317
#define _PAGEDOWN 318
#define _TAB 319
#define _ESCAPE 320
#define _SPACE 321
#define MCLOAD 322
#define MCENTERFRAME 323
#define MCUNLOAD 324
#define MCMOUSEMOVE 325
#define MCMOUSEDOWN 326
#define MCMOUSEUP 327
#define MCKEYDOWN 328
#define MCKEYUP 329
#define MCINITIALIZE 330
#define MCCONSTRUCT 331
#define MCDATA 332
#define MCPRESS 333
#define MCRELEASE 334
#define MCRELEASEOUTSIDE 335
#define MCROLLOVER 336
#define MCROLLOUT 337
#define MCDRAGOVER 338
#define MCDRAGOUT 339
#define X_PROPERTY 340
#define Y_PROPERTY 341
#define XSCALE_PROPERTY 342
#define YSCALE_PROPERTY 343
#define WIDTH_PROPERTY 344
#define HEIGHT_PROPERTY 345
#define ALPHA_PROPERTY 346
#define VISIBLE_PROPERTY 347
#define ROTATION_PROPERTY 348
#define CURRENTFRAME_PROPERTY 349
#define TOTALFRAMES_PROPERTY 350
#define TARGET_PROPERTY 351
#define FRAMESLOADED_PROPERTY 352
#define NAME_PROPERTY 353
#define DROPTARGET_PROPERTY 354
#define URL_PROPERTY 355
#define QUALITY_PROPERTY 356
#define XMOUSE_PROPERTY 357
#define YMOUSE_PROPERTY 358
#define HIGHQUALITY_PROPERTY 359
#define FOCUSRECT_PROPERTY 360
#define SOUNDBUFTIME_PROPERTY 361
#define NEXTFRAME 362
#define PREVFRAME 363
#define GOTOFRAME 364
#define GOTOLABEL 365
#define PLAY 366
#define STOP 367
#define TOGGLEQUALITY 368
#define STOPSOUNDS 369
#define FUNCTION 370
#define FUNCTION2 371
#define CONSTANTPOOL 372
#define END 373
#define DUP 374
#define SWAP 375
#define POP 376
#define WITH 377
#define PUSH 378
#define SETREGISTER 379
#define CALLFUNCTION 380
#define RETURN 381
#define NEWMETHOD 382
#define CALLMETHOD 383
#define BITWISEAND 384
#define BITWISEOR 385
#define BITWISEXOR 386
#define MODULO 387
#define NEWADD 388
#define NEWLESSTHAN 389
#define NEWEQUALS 390
#define TONUMBER 391
#define TOSTRING 392
#define INCREMENT 393
#define DECREMENT 394
#define TYPEOF 395
#define TARGETPATH 396
#define ENUMERATE 397
#define ENUMERATEVALUE 398
#define INSTANCEOF 399
#define DELETE 400
#define DELETE2 401
#define NEW 402
#define INITARRAY 403
#define INITOBJECT 404
#define GETMEMBER 405
#define SETMEMBER 406
#define SHIFTLEFT 407
#define SHIFTRIGHT 408
#define SHIFTRIGHT2 409
#define VAR 410
#define VAREQUALS 411
#define OLDADD 412
#define SUBTRACT 413
#define MULTIPLY 414
#define DIVIDE 415
#define OLDEQUALS 416
#define OLDLESSTHAN 417
#define STRICTEQUALS 418
#define GREATERTHAN 419
#define LOGICALAND 420
#define LOGICALOR 421
#define LOGICALNOT 422
#define STRINGEQ 423
#define STRINGLENGTH 424
#define SUBSTRING 425
#define INT 426
#define GETVARIABLE 427
#define SETVARIABLE 428
#define SETTARGET 429
#define SETTARGETEXPR 430
#define STRINGCONCAT 431
#define GETPROPERTY 432
#define SETPROPERTY 433
#define DUPLICATECLIP 434
#define REMOVECLIP 435
#define TRACE 436
#define STARTDRAGMOVIE 437
#define STOPDRAGMOVIE 438
#define STRINGLESSTHAN 439
#define STRINGGREATERTHAN 440
#define RANDOM 441
#define MBLENGTH 442
#define ORD 443
#define CHR 444
#define GETTIMER 445
#define MBSUBSTRING 446
#define MBORD 447
#define MBCHR 448
#define BRANCHALWAYS 449
#define GETURL 450
#define GETURL2 451
#define LOADMOVIE 452
#define LOADMOVIENUM 453
#define LOADVARIABLES 454
#define LOADVARIABLESNUM 455
#define POST 456
#define GET 457
#define BRANCHIFTRUE 458
#define CALLFRAME 459
#define GOTOANDPLAY 460
#define GOTOANDSTOP 461
#define SKIP 462
#define IFFRAMELOADEDEXPR 463
#define IFFRAMELOADED 464
#define ELSE 465
#define STRICTMODE 466
#define OFF 467
#define IMPLEMENTS 468
#define EXTENDS 469
#define THROW 470
#define CAST 471
#define TRY 472
#define CATCH 473
#define FINALLY 474
#define FSCOMMAND2 475
#define REGISTER 476
#define ATTRUSENETWORK 477
#define ATTRRELATIVEURLS 478
#define ATTRSUPPRESSCROSSDOMAINCACHE 479
#define ATTRACTIONSCRIPT3 480
#define ATTRHASMETADATA 481
#define SWFACTION 482
#define HEXDATA 483




/* Copy the first part of user declarations.  */
#line 7 "assembler.y"


#include <stdlib.h>
#include <string.h>
#include <math.h>
#ifdef MEMWATCH
#include "memwatch.h"
#endif
#include "util.h"
#include "flasm.h"

void yyerror(char *s);
void warning(char *msg);
int yylex(void);

extern char *yytext;
extern long int len;
extern unsigned int nConstants;
extern int mode;
extern char compressAfter;
extern int numActions;
extern int clearregisterargs;
extern char *arNames[];
extern unsigned int arPreFlags[];
extern unsigned int arSupFlags[];

static char *func_args[MAX_FUNCARGS];
static char *regfunc_args[MAX_FUNCDEPTH][MAX_REGISTERS];
static unsigned int numRegisters[MAX_FUNCDEPTH];
static int curFunc = -1;
static unsigned int numAssets;
static unsigned long int curEvent, allEvents;
static int frameloadedStart = -1;
static unsigned int numArgs;
static unsigned int autoregFlags, nosuppressFlags;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 46 "assembler.y"
{
  long int num;
  char *str;
}
/* Line 193 of yacc.c.  */
#line 594 "assembler.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 607 "assembler.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  159
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   810

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNRULES -- Number of states.  */
#define YYNSTATES  454

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   483

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   233,     2,     2,     2,     2,     2,
     229,   230,     2,     2,   231,     2,   234,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   232,     2,
       2,   235,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    10,    12,    13,    15,    17,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    41,
      43,    46,    49,    52,    55,    61,    66,    71,    72,    78,
      79,    81,    83,    86,    87,    93,    95,    99,   101,   103,
     105,   107,   109,   111,   113,   115,   117,   120,   122,   124,
     126,   128,   130,   132,   134,   136,   138,   140,   142,   144,
     146,   148,   150,   152,   154,   157,   160,   161,   167,   168,
     170,   172,   175,   177,   179,   180,   187,   188,   191,   192,
     194,   196,   199,   200,   206,   208,   212,   213,   215,   217,
     219,   221,   223,   225,   227,   229,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   250,   252,   254,   258,   260,
     262,   264,   266,   268,   270,   271,   274,   275,   278,   279,
     280,   281,   282,   293,   294,   295,   296,   297,   308,   310,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   336,   338,   342,   343,   345,   346,   348,   349,
     350,   360,   365,   367,   368,   370,   374,   379,   381,   382,
     384,   388,   389,   390,   391,   405,   406,   411,   412,   418,
     419,   424,   425,   430,   431,   437,   438,   445,   446,   448,
     450,   453,   457,   458,   463,   464,   466,   468,   471,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   503,   505,   507,   509,   511,   513,   515,
     517,   519,   521,   523,   525,   527,   529,   531,   533,   535,
     537,   539,   541,   543,   545,   547,   549,   551,   553,   555,
     557,   561,   563,   567,   568,   570,   572,   576,   577,   580,
     581,   583,   585,   586,   590,   591,   595,   596,   601,   604,
     606,   608,   610,   612,   614,   616,   618,   620,   622,   624,
     626,   628,   630,   632,   634,   636,   638,   640,   642,   644,
     646,   648,   650,   652,   654,   656,   658,   660,   662,   664,
     666,   668,   670,   672,   674,   676,   678,   680,   682,   684,
     686,   688,   690,   692,   694,   696,   698,   700,   702,   705,
     707,   709,   711,   713,   715,   717,   719,   721,   723,   725,
     727,   729,   731,   733,   735,   737,   739,   741,   743,   745,
     747,   749,   751,   753,   755,   757,   759,   761,   763,   765,
     767,   769,   771,   773,   777,   779,   783,   786,   789,   792,
     795,   798,   801,   805,   808,   811,   814,   817,   820,   823,
     826
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     237,     0,    -1,    -1,    15,     3,   238,   239,   118,    -1,
     281,    -1,    -1,   240,    -1,   241,    -1,   240,   241,    -1,
     242,    -1,   244,    -1,   254,    -1,   259,    -1,   243,    -1,
     308,    -1,   313,    -1,    16,    -1,    17,    -1,    17,     4,
      -1,    21,    -1,    21,     4,    -1,    22,     4,    -1,    33,
       4,    -1,    34,   268,    -1,    18,    19,    13,    20,    13,
      -1,    23,    13,   285,   118,    -1,    26,    13,   285,   118,
      -1,    -1,    27,    13,   245,   246,   118,    -1,    -1,   247,
      -1,   248,    -1,   247,   248,    -1,    -1,    28,   249,   250,
     285,   118,    -1,   251,    -1,   250,   231,   251,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,   252,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
       4,    -1,     5,    -1,   221,    13,    -1,   221,     4,    -1,
      -1,    25,    13,   255,   256,   118,    -1,    -1,   257,    -1,
     258,    -1,   257,   258,    -1,   242,    -1,   259,    -1,    -1,
      24,    13,   261,   260,   262,   118,    -1,    -1,    30,     4,
      -1,    -1,   263,    -1,   264,    -1,   263,   264,    -1,    -1,
      29,   266,   265,   285,   118,    -1,   267,    -1,   266,   231,
     267,    -1,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    77,
      -1,    75,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    51,   252,    -1,
      76,    -1,   269,    -1,   268,   231,   269,    -1,   222,    -1,
     223,    -1,   224,    -1,   225,    -1,   226,    -1,    13,    -1,
      -1,   218,   285,    -1,    -1,   219,   285,    -1,    -1,    -1,
      -1,    -1,   217,   286,   273,   285,   274,   270,   275,   271,
     276,   118,    -1,    -1,    -1,    -1,    -1,   217,   253,   277,
     285,   278,   270,   279,   271,   280,   118,    -1,   282,    -1,
     281,   282,    -1,   283,    -1,   287,    -1,   294,    -1,   298,
      -1,   300,    -1,   302,    -1,   306,    -1,   304,    -1,   272,
      -1,   326,    -1,    12,    -1,    -1,     4,    -1,   284,   231,
       4,    -1,    -1,   281,    -1,    -1,     4,    -1,    -1,    -1,
     115,   286,   288,   229,   284,   230,   289,   285,   118,    -1,
     221,    13,   235,     4,    -1,     4,    -1,    -1,   290,    -1,
     291,   231,   290,    -1,   221,    13,   235,     4,    -1,     4,
      -1,    -1,   292,    -1,   293,   231,   292,    -1,    -1,    -1,
      -1,   116,   286,   295,   229,   291,   230,   296,   229,   293,
     230,   297,   285,   118,    -1,    -1,   122,   299,   285,   118,
      -1,    -1,   174,     4,   301,   285,   118,    -1,    -1,   175,
     303,   285,   118,    -1,    -1,   208,   305,   285,   118,    -1,
      -1,   209,    13,   307,   285,   118,    -1,    -1,    31,    35,
       4,   309,   310,   118,    -1,    -1,   311,    -1,   312,    -1,
     311,   312,    -1,     4,    30,    13,    -1,    -1,    32,   314,
     315,   118,    -1,    -1,   316,    -1,   317,    -1,   316,   317,
      -1,    13,    30,     4,    -1,     4,    -1,    14,    -1,   319,
      -1,     6,    -1,    39,    -1,    40,    -1,    41,    -1,     5,
      -1,    13,    -1,     7,    -1,    36,    -1,    37,    -1,    38,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,   253,
      -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,    94,
      -1,    95,    -1,    91,    -1,    92,    -1,    89,    -1,    90,
      -1,    93,    -1,    96,    -1,    97,    -1,    98,    -1,    99,
      -1,   100,    -1,   104,    -1,   105,    -1,   106,    -1,   101,
      -1,   102,    -1,   103,    -1,   318,    -1,   320,   231,   318,
      -1,     4,    -1,   321,   231,     4,    -1,    -1,   321,    -1,
       5,    -1,   323,   231,     5,    -1,    -1,   228,   323,    -1,
      -1,   202,    -1,   201,    -1,    -1,   117,   327,   322,    -1,
      -1,   123,   328,   320,    -1,    -1,   227,     5,   329,   324,
      -1,   124,   253,    -1,   163,    -1,   164,    -1,   143,    -1,
     144,    -1,   107,    -1,   108,    -1,   111,    -1,   112,    -1,
     113,    -1,   114,    -1,   125,    -1,   126,    -1,   127,    -1,
     128,    -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,
     138,    -1,   139,    -1,   140,    -1,   141,    -1,   142,    -1,
     145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,
     150,    -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,
     155,    -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,
     160,    -1,   161,    -1,   162,    -1,   220,    -1,   165,    -1,
     166,    -1,   167,   167,    -1,   167,    -1,   168,    -1,   169,
      -1,   170,    -1,   171,    -1,   119,    -1,   120,    -1,   121,
      -1,   172,    -1,   173,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,
      -1,   184,    -1,   185,    -1,   186,    -1,   187,    -1,   188,
      -1,   189,    -1,   190,    -1,   191,    -1,   192,    -1,   193,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   204,
      -1,   206,    -1,   206,   207,    13,    -1,   205,    -1,   205,
     207,    13,    -1,   110,     4,    -1,   194,     4,    -1,   194,
      13,    -1,   203,     4,    -1,   203,    13,    -1,   109,    13,
      -1,   195,     4,     4,    -1,   196,   325,    -1,   199,   325,
      -1,   200,   325,    -1,   197,   325,    -1,   198,   325,    -1,
     211,    28,    -1,   211,   212,    -1,    15,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   322,   322,   322,   330,   339,   340,   344,   345,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   376,   386,   397,   397,   402,
     403,   407,   408,   412,   412,   422,   423,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   464,   479,   500,   500,   505,   506,
     510,   511,   515,   516,   520,   520,   525,   526,   530,   531,
     535,   536,   540,   540,   555,   556,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   583,   584,   588,   589,
     590,   591,   592,   593,   597,   598,   602,   603,   607,   623,
     624,   625,   607,   636,   652,   653,   654,   636,   667,   668,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     686,   693,   694,   695,   699,   700,   704,   705,   709,   716,
     709,   739,   766,   775,   776,   777,   781,   812,   833,   834,
     835,   839,   857,   865,   839,   907,   907,   923,   923,   937,
     937,   946,   946,   963,   963,   981,   981,   990,   991,   995,
     996,  1000,  1009,  1009,  1018,  1019,  1023,  1024,  1028,  1037,
    1039,  1051,  1056,  1063,  1068,  1073,  1078,  1087,  1092,  1097,
    1102,  1107,  1112,  1117,  1122,  1124,  1126,  1133,  1134,  1135,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1158,
    1159,  1163,  1164,  1168,  1169,  1173,  1179,  1187,  1188,  1192,
    1193,  1194,  1198,  1198,  1201,  1201,  1212,  1212,  1227,  1233,
    1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1242,  1243,
    1244,  1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,  1253,
    1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1264,  1265,  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,
    1274,  1275,  1276,  1277,  1278,  1279,  1280,  1281,  1282,  1293,
    1294,  1295,  1296,  1297,  1298,  1299,  1300,  1301,  1302,  1303,
    1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1326,  1331,  1337,  1344,  1350,  1357,  1363,  1369,  1375,
    1381,  1387,  1393,  1400,  1406,  1412,  1418,  1424,  1430,  1436,
    1442
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MOVIENAME", "STRING", "HEX", "FLOAT",
  "DOUBLE", "TRUEVAL", "FALSEVAL", "NULLVAL", "UNDEFVAL", "LABEL",
  "INTEGER", "CONSTANT", "MOVIE", "COMPRESSED", "PROTECT", "SCRIPTLIMITS",
  "RECURSION", "TIMEOUT", "ENABLEDEBUGGER", "ENABLEDEBUGGER2", "FRAME",
  "PLACEMOVIECLIP", "DEFINEMOVIECLIP", "INITMOVIECLIP", "DEFINEBUTTON",
  "ON", "ONCLIPEVENT", "AS", "IMPORTASSETS", "EXPORTASSETS", "METADATA",
  "FILEATTRIBUTES", "FROM", "_NAN", "POSITIVE_INFINITY",
  "NEGATIVE_INFINITY", "_NANF", "POSITIVE_INFINITYF", "NEGATIVE_INFINITYF",
  "BIDLETOOVERUP", "BOVERUPTOIDLE", "BOVERUPTOOVERDOWN",
  "BOVERDOWNTOOVERUP", "BOVERDOWNTOOUTDOWN", "BOUTDOWNTOOVERDOWN",
  "BOUTDOWNTOIDLE", "BIDLETOOVERDOWN", "BOVERDOWNTOIDLE", "KEYPRESS",
  "_LEFT", "_RIGHT", "_HOME", "_END", "_INSERT", "_DELETE", "_BACKSPACE",
  "_ENTER", "_UP", "_DOWN", "_PAGEUP", "_PAGEDOWN", "_TAB", "_ESCAPE",
  "_SPACE", "MCLOAD", "MCENTERFRAME", "MCUNLOAD", "MCMOUSEMOVE",
  "MCMOUSEDOWN", "MCMOUSEUP", "MCKEYDOWN", "MCKEYUP", "MCINITIALIZE",
  "MCCONSTRUCT", "MCDATA", "MCPRESS", "MCRELEASE", "MCRELEASEOUTSIDE",
  "MCROLLOVER", "MCROLLOUT", "MCDRAGOVER", "MCDRAGOUT", "X_PROPERTY",
  "Y_PROPERTY", "XSCALE_PROPERTY", "YSCALE_PROPERTY", "WIDTH_PROPERTY",
  "HEIGHT_PROPERTY", "ALPHA_PROPERTY", "VISIBLE_PROPERTY",
  "ROTATION_PROPERTY", "CURRENTFRAME_PROPERTY", "TOTALFRAMES_PROPERTY",
  "TARGET_PROPERTY", "FRAMESLOADED_PROPERTY", "NAME_PROPERTY",
  "DROPTARGET_PROPERTY", "URL_PROPERTY", "QUALITY_PROPERTY",
  "XMOUSE_PROPERTY", "YMOUSE_PROPERTY", "HIGHQUALITY_PROPERTY",
  "FOCUSRECT_PROPERTY", "SOUNDBUFTIME_PROPERTY", "NEXTFRAME", "PREVFRAME",
  "GOTOFRAME", "GOTOLABEL", "PLAY", "STOP", "TOGGLEQUALITY", "STOPSOUNDS",
  "FUNCTION", "FUNCTION2", "CONSTANTPOOL", "END", "DUP", "SWAP", "POP",
  "WITH", "PUSH", "SETREGISTER", "CALLFUNCTION", "RETURN", "NEWMETHOD",
  "CALLMETHOD", "BITWISEAND", "BITWISEOR", "BITWISEXOR", "MODULO",
  "NEWADD", "NEWLESSTHAN", "NEWEQUALS", "TONUMBER", "TOSTRING",
  "INCREMENT", "DECREMENT", "TYPEOF", "TARGETPATH", "ENUMERATE",
  "ENUMERATEVALUE", "INSTANCEOF", "DELETE", "DELETE2", "NEW", "INITARRAY",
  "INITOBJECT", "GETMEMBER", "SETMEMBER", "SHIFTLEFT", "SHIFTRIGHT",
  "SHIFTRIGHT2", "VAR", "VAREQUALS", "OLDADD", "SUBTRACT", "MULTIPLY",
  "DIVIDE", "OLDEQUALS", "OLDLESSTHAN", "STRICTEQUALS", "GREATERTHAN",
  "LOGICALAND", "LOGICALOR", "LOGICALNOT", "STRINGEQ", "STRINGLENGTH",
  "SUBSTRING", "INT", "GETVARIABLE", "SETVARIABLE", "SETTARGET",
  "SETTARGETEXPR", "STRINGCONCAT", "GETPROPERTY", "SETPROPERTY",
  "DUPLICATECLIP", "REMOVECLIP", "TRACE", "STARTDRAGMOVIE",
  "STOPDRAGMOVIE", "STRINGLESSTHAN", "STRINGGREATERTHAN", "RANDOM",
  "MBLENGTH", "ORD", "CHR", "GETTIMER", "MBSUBSTRING", "MBORD", "MBCHR",
  "BRANCHALWAYS", "GETURL", "GETURL2", "LOADMOVIE", "LOADMOVIENUM",
  "LOADVARIABLES", "LOADVARIABLESNUM", "POST", "GET", "BRANCHIFTRUE",
  "CALLFRAME", "GOTOANDPLAY", "GOTOANDSTOP", "SKIP", "IFFRAMELOADEDEXPR",
  "IFFRAMELOADED", "ELSE", "STRICTMODE", "OFF", "IMPLEMENTS", "EXTENDS",
  "THROW", "CAST", "TRY", "CATCH", "FINALLY", "FSCOMMAND2", "REGISTER",
  "ATTRUSENETWORK", "ATTRRELATIVEURLS", "ATTRSUPPRESSCROSSDOMAINCACHE",
  "ATTRACTIONSCRIPT3", "ATTRHASMETADATA", "SWFACTION", "HEXDATA", "'('",
  "')'", "','", "':'", "'\"'", "'.'", "'='", "$accept", "program", "@1",
  "actionblocks_opt", "actionblocks", "actionblock", "frame", "initmc",
  "definebutton", "@2", "buttoneventblocks_opt", "buttoneventblocks",
  "buttoneventblock", "@3", "buttonevents", "buttonevent", "key",
  "register", "definemc", "@4", "mcblocks_opt", "mcblocks", "mcblock",
  "placemc", "@5", "mcname_opt", "mceventblocks_opt", "mceventblocks",
  "mceventblock", "@6", "mcevents", "mcevent", "fileattrs", "fileattr",
  "catch_opt", "finally_opt", "trycatchfinally", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "statements", "statement", "label",
  "function_args", "statements_opt", "name_opt", "function", "@15", "@16",
  "regarg", "regarglist", "autoregarg", "autoregarglist", "function2",
  "@17", "@18", "@19", "with", "@20", "settarget", "@21",
  "settargetexpression", "@22", "ifframeloadedexpression", "@23",
  "ifframeloaded", "@24", "impassets", "@25", "impassetsblocks_opt",
  "impassetsblocks", "impassetsblock", "expassets", "@26",
  "expassetsblocks_opt", "expassetsblocks", "expassetsblock", "push_item",
  "property", "push_list", "constant_list", "constant_list_opt",
  "hex_list", "hexlist_opt", "urlmethod", "opcode", "@27", "@28", "@29", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,    40,
      41,    44,    58,    34,    46,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   236,   238,   237,   237,   239,   239,   240,   240,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   242,   243,   245,   244,   246,
     246,   247,   247,   249,   248,   250,   250,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   253,   253,   255,   254,   256,   256,
     257,   257,   258,   258,   260,   259,   261,   261,   262,   262,
     263,   263,   265,   264,   266,   266,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   268,   268,   269,   269,
     269,   269,   269,   269,   270,   270,   271,   271,   273,   274,
     275,   276,   272,   277,   278,   279,   280,   272,   281,   281,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     283,   284,   284,   284,   285,   285,   286,   286,   288,   289,
     287,   290,   290,   291,   291,   291,   292,   292,   293,   293,
     293,   295,   296,   297,   294,   299,   298,   301,   300,   303,
     302,   305,   304,   307,   306,   309,   308,   310,   310,   311,
     311,   312,   314,   313,   315,   315,   316,   316,   317,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   320,
     320,   321,   321,   322,   322,   323,   323,   324,   324,   325,
     325,   325,   327,   326,   328,   326,   329,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     2,     5,     4,     4,     0,     5,     0,
       1,     1,     2,     0,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     5,     0,     1,
       1,     2,     1,     1,     0,     6,     0,     2,     0,     1,
       1,     2,     0,     5,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     0,
       0,     0,    10,     0,     0,     0,     0,    10,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     3,     0,     1,     0,     1,     0,     0,
       9,     4,     1,     0,     1,     3,     4,     1,     0,     1,
       3,     0,     0,     0,    13,     0,     4,     0,     5,     0,
       4,     0,     4,     0,     5,     0,     6,     0,     1,     1,
       2,     3,     0,     4,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     1,     3,     0,     2,     0,
       1,     1,     0,     3,     0,     3,     0,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     2,     2,     2,     2,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   140,     0,   253,   254,     0,     0,   255,   256,   257,
     258,   146,   146,   242,   304,   305,   306,   165,   244,     0,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   251,   252,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   249,   250,
     296,   297,   299,   300,   301,   302,   303,   307,   308,     0,
     169,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,   239,   239,   239,   239,   239,     0,   331,   334,   332,
     171,     0,     0,   327,   328,   329,   330,   146,   295,     0,
       0,   138,     4,   128,   130,   131,   132,   133,   134,   135,
     137,   136,   139,     2,   350,   341,   336,   147,   148,   161,
     233,   144,     0,     0,   248,   298,   167,   144,   337,   338,
       0,   241,   240,   343,   346,   347,   344,   345,   339,   340,
       0,     0,   144,   173,   348,   349,   123,   118,   246,     1,
       0,   129,     5,     0,     0,   231,   234,   243,   145,     0,
     189,   196,   192,   198,   202,   203,   204,   205,   197,   190,
     199,   200,   201,   193,   194,   195,   207,   208,   209,   210,
     215,   216,   213,   214,   217,   211,   212,   218,   219,   220,
     221,   222,   226,   227,   228,   223,   224,   225,   206,   229,
     191,   245,    65,    64,   144,     0,   342,   335,   333,     0,
     144,   144,   144,   237,    16,    17,     0,    19,     0,     0,
       0,     0,     0,     0,     0,   182,     0,     0,     0,     6,
       7,     9,    13,    10,    11,    12,    14,    15,   141,   153,
       0,   166,     0,     0,   170,   172,     0,   124,   119,     0,
     247,    18,     0,    20,    21,   144,    76,    66,   144,    27,
       0,   184,    22,   113,   108,   109,   110,   111,   112,    23,
     106,     3,     8,   142,     0,   152,     0,   154,     0,   232,
     230,   168,   174,   114,   114,   235,   238,     0,     0,     0,
      74,    68,     0,    29,   175,     0,     0,   185,   186,     0,
     149,     0,     0,   162,     0,   144,   125,   120,     0,     0,
      25,    77,    78,    72,     0,    69,    70,    73,    26,    33,
       0,    30,    31,   177,     0,   183,   187,   107,   144,   143,
       0,     0,   155,   115,   116,   116,   236,    24,    86,     0,
      79,    80,    67,    71,     0,    28,    32,     0,     0,   178,
     179,   188,     0,   151,   158,   144,   126,   121,     0,    87,
      88,    89,    90,    91,    92,    93,    94,    96,   105,    95,
      97,    98,    99,   100,   101,   102,   103,    82,    84,    75,
      81,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,   144,    35,     0,   176,   180,   150,   157,     0,   159,
       0,   117,     0,     0,    62,    63,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   104,    86,   144,    46,     0,     0,   181,     0,   163,
       0,   127,   122,    85,     0,    36,    34,     0,   144,   160,
      83,   156,     0,   164
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   162,   238,   239,   240,   241,   242,   243,   303,
     330,   331,   332,   354,   401,   402,   431,   208,   244,   301,
     324,   325,   326,   245,   322,   300,   349,   350,   351,   433,
     387,   388,   279,   280,   316,   366,   111,   222,   294,   345,
     413,   221,   293,   344,   412,   168,   113,   114,   284,   169,
     128,   115,   163,   338,   287,   288,   409,   410,   116,   164,
     341,   448,   117,   131,   118,   214,   119,   137,   120,   152,
     121,   220,   246,   333,   358,   359,   360,   247,   271,   306,
     307,   308,   209,   210,   211,   166,   167,   296,   260,   143,
     122,   130,   132,   223
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -281
static const yytype_int16 yypact[] =
{
     388,  -281,    16,  -281,  -281,    65,    75,  -281,  -281,  -281,
    -281,    76,    76,  -281,  -281,  -281,  -281,  -281,  -281,  -140,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,   -85,  -281,  -281,  -281,  -281,  -281,  -281,   106,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,    34,
     108,  -134,  -134,  -134,  -134,  -134,    47,  -281,   -93,   -92,
    -281,   103,   -23,  -281,  -281,  -281,  -281,    -3,  -281,   112,
     118,  -281,   583,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
     115,   583,     3,    48,  -281,  -281,  -281,   583,  -281,  -281,
     116,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
     109,   110,   583,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
     117,  -281,    32,  -105,  -104,  -281,  -102,  -281,   583,     8,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -101,  -281,  -281,   583,     9,  -281,  -281,  -281,    14,
     583,   583,   583,   -95,  -281,   145,   131,   147,   148,   140,
     141,   142,   143,   144,   123,  -281,   155,    -9,    42,    32,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   157,    -2,
     158,  -281,     3,    45,  -281,  -281,    46,  -281,  -281,   160,
    -281,  -281,   153,  -281,  -281,   583,   137,  -281,   583,  -281,
     164,   156,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   -61,
    -281,  -281,  -281,  -281,  -161,  -281,   159,  -281,  -159,  -281,
    -281,  -281,  -281,   -47,   -47,  -281,   -57,   161,    55,   171,
    -281,    50,    58,   149,  -281,   150,    61,   156,  -281,    -9,
    -281,   178,   -52,  -281,    -2,   583,  -281,  -281,   179,   172,
    -281,  -281,   162,  -281,    68,    50,  -281,  -281,  -281,  -281,
      69,   149,  -281,   184,   186,  -281,  -281,  -281,   583,  -281,
     188,   -36,  -281,  -281,   -25,   -25,  -281,  -281,   170,    77,
     162,  -281,  -281,  -281,   -18,  -281,  -281,   166,    79,   184,
    -281,  -281,    80,  -281,    -1,   583,  -281,  -281,    82,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,   -32,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
      82,   193,  -281,   187,  -281,  -281,  -281,  -281,   189,  -281,
    -155,  -281,    85,    86,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,   170,   583,  -281,   -18,    88,  -281,   -28,  -281,
      -1,  -281,  -281,  -281,    91,  -281,  -281,   206,   583,  -281,
    -281,  -281,    93,  -281
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -281,  -281,  -281,  -281,  -281,   -27,  -280,  -281,  -281,  -281,
    -281,  -281,  -109,  -281,  -281,  -212,  -175,     4,  -281,  -281,
    -281,  -281,   -99,  -279,  -281,  -281,  -281,  -281,  -123,  -281,
    -281,  -203,  -281,   -79,   -63,  -113,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,   233,  -106,  -281,  -281,  -137,
       6,  -281,  -281,  -281,   -80,  -281,  -205,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -103,  -281,  -281,  -281,
    -281,   -71,     5,  -281,  -281,  -281,  -281,  -281,  -281,   -58,
    -281,  -281,  -281,  -281
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     215,   127,   285,   407,   273,   154,   161,   170,   171,   172,
     173,   174,   175,   176,   177,   219,   178,   179,   129,   123,
     124,   323,   327,   134,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   144,   145,   146,   147,   138,   180,
     181,   182,   183,   184,   185,   323,   327,   139,   224,   225,
     226,   148,   212,   227,   228,   229,   230,   231,   232,   233,
     149,   213,   161,   234,   235,   236,   237,   141,   142,   310,
     311,   313,   314,   229,   230,   439,   440,   253,   125,   126,
     127,   133,   135,   256,   257,   258,   414,   415,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     136,   156,   140,   157,   150,   151,   153,   158,   159,   165,
     216,   124,   217,   218,   248,   249,   251,   254,   298,   250,
     252,   302,   255,   259,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   272,
     281,   283,   289,   291,   292,   295,   297,   299,   304,   305,
     309,   315,   312,   320,   318,   321,   328,   329,   343,   335,
     334,   319,   339,   340,   346,   347,   352,   355,   357,   155,
     361,   348,   363,   364,   365,   389,   403,   404,   406,   432,
     437,   362,   438,   441,   442,     1,   446,   447,   160,   450,
     451,   453,   282,   274,   275,   276,   277,   278,   133,   286,
     408,   368,   356,   445,   133,   434,   353,   390,   411,   443,
     337,   317,   367,   112,   342,   449,   336,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,     0,   405,   290,     0,     0,
       0,     0,     0,     0,   436,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   452,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,     0,    96,    97,    98,    99,
       1,   100,   101,     2,   102,     0,   103,   104,   105,   106,
     107,     0,     0,   108,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,   435,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,    96,    97,    98,    99,     1,   100,   101,   160,   102,
       0,   103,   104,   105,   106,   107,     0,     0,   108,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,     0,    96,    97,    98,    99,
       0,   100,   101,     0,   102,     0,   103,   104,   105,   106,
     107,     0,     0,   108,     0,     0,     0,     0,     0,     0,
     109
};

static const yytype_int16 yycheck[] =
{
     137,     4,     4,     4,    13,    28,   112,     4,     5,     6,
       7,     8,     9,    10,    11,   152,    13,    14,    12,     3,
       4,   301,   301,    19,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    92,    93,    94,    95,     4,    36,
      37,    38,    39,    40,    41,   325,   325,    13,    16,    17,
      18,     4,     4,    21,    22,    23,    24,    25,    26,    27,
      13,    13,   168,    31,    32,    33,    34,   201,   202,   230,
     231,   230,   231,    23,    24,   230,   231,   214,    13,     4,
       4,   221,   167,   220,   221,   222,     4,     5,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
       4,   107,     4,   107,   207,   207,    13,     5,     0,     4,
       4,     4,    13,    13,   229,   229,   118,   118,   265,   231,
     231,   268,   118,   228,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     4,
      19,     4,     4,    13,    13,    13,    13,    13,    35,     4,
     118,     4,     4,   118,   118,     5,    13,    30,     4,    13,
     231,   218,    13,   118,   231,     4,   118,    28,   315,   118,
      30,    20,     4,   235,     5,    13,   118,   118,     4,   212,
       4,    29,     4,   229,   219,   118,    30,   118,   118,   231,
      13,   338,    13,   118,   118,    12,   118,   235,    15,   118,
       4,   118,   239,   222,   223,   224,   225,   226,   221,   221,
     221,    51,   331,   435,   221,   400,   325,   350,   365,   432,
     309,   294,   345,     0,   314,   440,   307,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,   359,   252,    -1,    -1,
      -1,    -1,    -1,    -1,   401,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   448,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,    -1,   203,   204,   205,   206,
      12,   208,   209,    15,   211,    -1,   213,   214,   215,   216,
     217,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
      -1,   203,   204,   205,   206,    12,   208,   209,    15,   211,
      -1,   213,   214,   215,   216,   217,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,    -1,   203,   204,   205,   206,
      -1,   208,   209,    -1,   211,    -1,   213,   214,   215,   216,
     217,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    15,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   203,   204,   205,   206,
     208,   209,   211,   213,   214,   215,   216,   217,   220,   227,
     237,   272,   281,   282,   283,   287,   294,   298,   300,   302,
     304,   306,   326,     3,     4,    13,     4,     4,   286,   286,
     327,   299,   328,   221,   253,   167,     4,   303,     4,    13,
       4,   201,   202,   325,   325,   325,   325,   325,     4,    13,
     207,   207,   305,    13,    28,   212,   253,   286,     5,     0,
      15,   282,   238,   288,   295,     4,   321,   322,   281,   285,
       4,     5,     6,     7,     8,     9,    10,    11,    13,    14,
      36,    37,    38,    39,    40,    41,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   253,   318,
     319,   320,     4,    13,   301,   285,     4,    13,    13,   285,
     307,   277,   273,   329,    16,    17,    18,    21,    22,    23,
      24,    25,    26,    27,    31,    32,    33,    34,   239,   240,
     241,   242,   243,   244,   254,   259,   308,   313,   229,   229,
     231,   118,   231,   285,   118,   118,   285,   285,   285,   228,
     324,     4,    19,     4,     4,    13,    13,    13,    13,    13,
      35,   314,     4,    13,   222,   223,   224,   225,   226,   268,
     269,   118,   241,     4,   284,     4,   221,   290,   291,     4,
     318,   118,   118,   278,   274,     5,   323,    13,   285,    30,
     261,   255,   285,   245,     4,    13,   315,   316,   317,   231,
     230,   231,    13,   230,   231,   218,   270,   270,   231,    20,
     118,     4,   260,   242,   256,   257,   258,   259,   118,    28,
     246,   247,   248,   309,    30,   118,   317,   269,   289,     4,
     235,   296,   290,   285,   279,   275,     5,    13,    29,   262,
     263,   264,   118,   258,   249,   118,   248,     4,   310,   311,
     312,     4,   285,     4,   229,   219,   271,   271,    51,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,   266,   267,   118,
     264,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   250,   251,    30,   118,   312,   118,     4,   221,   292,
     293,   285,   280,   276,     4,     5,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   252,   231,   265,   252,   231,   285,    13,    13,   230,
     231,   118,   118,   267,   285,   251,   118,   235,   297,   292,
     118,     4,   285,   118
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 322 "assembler.y"
    { 
                                                    if (mode != MODE_ASBYTECODE)
                                                        startUpdate((yyvsp[(2) - (2)].str));
                                                    else
                                                        yyerror("Only single action block can be assembled to __bytecode__, not the whole Flasm project");
                                                
                                                ;}
    break;

  case 3:
#line 329 "assembler.y"
    {   finishUpdate();     ;}
    break;

  case 4:
#line 330 "assembler.y"
    {
                                                    if (mode == MODE_ASBYTECODE)
                                                        writeASBytecode();
                                                    else
                                                        yyerror("Flasm project should start with movie 'moviename.swf'");
                                                ;}
    break;

  case 5:
#line 339 "assembler.y"
    {   (yyval.num) = 0;             ;}
    break;

  case 6:
#line 340 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);            ;}
    break;

  case 7:
#line 344 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);            ;}
    break;

  case 8:
#line 345 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num);       ;}
    break;

  case 9:
#line 349 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 10:
#line 350 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 11:
#line 351 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 12:
#line 352 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 13:
#line 353 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 14:
#line 354 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 15:
#line 355 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 16:
#line 356 "assembler.y"
    {   compressAfter = 1;          (yyval.num) = 0; ;}
    break;

  case 17:
#line 357 "assembler.y"
    {   writeProtect("");           (yyval.num) = 0; ;}
    break;

  case 18:
#line 358 "assembler.y"
    {   writeProtect((yyvsp[(2) - (2)].str));           (yyval.num) = 0; ;}
    break;

  case 19:
#line 359 "assembler.y"
    {   writeEnableDebugger("");    (yyval.num) = 0; ;}
    break;

  case 20:
#line 360 "assembler.y"
    {   writeEnableDebugger((yyvsp[(2) - (2)].str));    (yyval.num) = 0; ;}
    break;

  case 21:
#line 361 "assembler.y"
    {   writeEnableDebugger2((yyvsp[(2) - (2)].str));   (yyval.num) = 0; ;}
    break;

  case 22:
#line 362 "assembler.y"
    {   writeMetadata((yyvsp[(2) - (2)].str));          (yyval.num) = 0; ;}
    break;

  case 23:
#line 363 "assembler.y"
    {   writeFileAttrs((yyvsp[(2) - (2)].num));         (yyval.num) = 0; ;}
    break;

  case 24:
#line 365 "assembler.y"
    {
                                                    if ((yyvsp[(3) - (5)].num)>65535)
                                                        yyerror("Recursion depth out of range");
                                                    if ((yyvsp[(5) - (5)].num)>65535)
                                                        yyerror("Timeout out of range");
                                                    writeScriptLimits((unsigned int)(yyvsp[(3) - (5)].num), (unsigned int)(yyvsp[(5) - (5)].num));
                                                    (yyval.num) = 0;
                                                ;}
    break;

  case 25:
#line 376 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(3) - (4)].num);
                                                    /*action end*/
                                                    (yyval.num) += writeByte(0);
                                                    writeDoAction();
                                                    (yyval.num) = 0;
                                                ;}
    break;

  case 26:
#line 387 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(3) - (4)].num);
                                                    /*action end*/
                                                    (yyval.num) += writeByte(0);
                                                    writeInitMC((yyvsp[(2) - (4)].num));
                                                    (yyval.num) = 0;
                                                ;}
    break;

  case 27:
#line 397 "assembler.y"
    {   writeButtonStart((yyvsp[(2) - (2)].num)); ;}
    break;

  case 28:
#line 398 "assembler.y"
    {   (yyval.num) = (yyvsp[(4) - (5)].num); writeButtonEnd();  ;}
    break;

  case 29:
#line 402 "assembler.y"
    {   (yyval.num) = 0;         ;}
    break;

  case 30:
#line 403 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 31:
#line 407 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 32:
#line 408 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num);   ;}
    break;

  case 33:
#line 412 "assembler.y"
    {   curEvent = 0;   ;}
    break;

  case 34:
#line 413 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(4) - (5)].num);
                                                    /*event action end*/
                                                    (yyval.num) += writeByte(0);
                                                    writeButtonEvent((unsigned int)curEvent);
                                                ;}
    break;

  case 35:
#line 422 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);  curEvent += (yyvsp[(1) - (1)].num);   ;}
    break;

  case 36:
#line 423 "assembler.y"
    {   (yyval.num) += (yyvsp[(3) - (3)].num); curEvent += (yyvsp[(3) - (3)].num);   ;}
    break;

  case 37:
#line 427 "assembler.y"
    {   (yyval.num) = 0x01;  ;}
    break;

  case 38:
#line 428 "assembler.y"
    {   (yyval.num) = 0x02;  ;}
    break;

  case 39:
#line 429 "assembler.y"
    {   (yyval.num) = 0x04;  ;}
    break;

  case 40:
#line 430 "assembler.y"
    {   (yyval.num) = 0x08;  ;}
    break;

  case 41:
#line 431 "assembler.y"
    {   (yyval.num) = 0x10;  ;}
    break;

  case 42:
#line 432 "assembler.y"
    {   (yyval.num) = 0x20;  ;}
    break;

  case 43:
#line 433 "assembler.y"
    {   (yyval.num) = 0x40;  ;}
    break;

  case 44:
#line 434 "assembler.y"
    {   (yyval.num) = 0x80;  ;}
    break;

  case 45:
#line 435 "assembler.y"
    {   (yyval.num) = 0x100; ;}
    break;

  case 46:
#line 436 "assembler.y"
    {   (yyval.num) = (yyvsp[(2) - (2)].num)<<9; ;}
    break;

  case 47:
#line 440 "assembler.y"
    {   (yyval.num) = 1;     ;}
    break;

  case 48:
#line 441 "assembler.y"
    {   (yyval.num) = 2;     ;}
    break;

  case 49:
#line 442 "assembler.y"
    {   (yyval.num) = 3;     ;}
    break;

  case 50:
#line 443 "assembler.y"
    {   (yyval.num) = 4;     ;}
    break;

  case 51:
#line 444 "assembler.y"
    {   (yyval.num) = 5;     ;}
    break;

  case 52:
#line 445 "assembler.y"
    {   (yyval.num) = 6;     ;}
    break;

  case 53:
#line 446 "assembler.y"
    {   (yyval.num) = 8;     ;}
    break;

  case 54:
#line 447 "assembler.y"
    {   (yyval.num) = 13;    ;}
    break;

  case 55:
#line 448 "assembler.y"
    {   (yyval.num) = 14;    ;}
    break;

  case 56:
#line 449 "assembler.y"
    {   (yyval.num) = 15;    ;}
    break;

  case 57:
#line 450 "assembler.y"
    {   (yyval.num) = 16;    ;}
    break;

  case 58:
#line 451 "assembler.y"
    {   (yyval.num) = 17;    ;}
    break;

  case 59:
#line 452 "assembler.y"
    {   (yyval.num) = 18;    ;}
    break;

  case 60:
#line 453 "assembler.y"
    {   (yyval.num) = 19;    ;}
    break;

  case 61:
#line 454 "assembler.y"
    {   (yyval.num) = 32;    ;}
    break;

  case 62:
#line 455 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].str)[0]; ;}
    break;

  case 63:
#line 456 "assembler.y"
    {
                                                    if (xtoi((yyvsp[(1) - (1)].str))>0x7f)
                                                        yyerror("key code should be not greater than 0x7F");
                                                    (yyval.num) = (char)xtoi((yyvsp[(1) - (1)].str));
                                                ;}
    break;

  case 64:
#line 464 "assembler.y"
    {
                                                    /* only 255 regs can be allocated within function2,
                                                       r:0 being the first and r:254 the last;
                                                       outside 4 global registers exist */
                                                    if ((yyvsp[(2) - (2)].num) >= 255)
                                                        yyerror("Register number out of range");
                                                    if ((byte)(yyvsp[(2) - (2)].num) > 3 && curFunc < 0)
                                                        warning("Local registers r:4 to r:255 work in function2 context only");
                                                    /* if needed, increase the number of registers
                                                       to allocate for function2 */
                                                    if (curFunc >= 0  &&  (yyvsp[(2) - (2)].num) + 1 > (long int) numRegisters[curFunc])
                                                        numRegisters[curFunc] = (yyvsp[(2) - (2)].num) + 1;                                               
                                                    (yyval.num) = (yyvsp[(2) - (2)].num);
                                                ;}
    break;

  case 65:
#line 479 "assembler.y"
    {
                                                    unsigned int m;
                                                    int r = -1;
                                                    
                                                    if (curFunc >= 0) {
                                                        for(m = 1; m < numRegisters[curFunc]; ++m) {
                                                            if (regfunc_args[curFunc][m] != NULL && !strcmp((yyvsp[(2) - (2)].str), regfunc_args[curFunc][m])) {
                                                                r = m;
                                                                break;
                                                            }
                                                        }
                                                    }

                                                    if (r == -1)
                                                        yyerror("Register alias not found");
                                                    
                                                    (yyval.num) = r;
                                                ;}
    break;

  case 66:
#line 500 "assembler.y"
    {   writeDefineMCStart((yyvsp[(2) - (2)].num));   ;}
    break;

  case 67:
#line 501 "assembler.y"
    {   (yyval.num) = (yyvsp[(4) - (5)].num); writeDefineMCEnd();    ;}
    break;

  case 68:
#line 505 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 69:
#line 506 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 70:
#line 510 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 71:
#line 511 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num);   ;}
    break;

  case 72:
#line 515 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 73:
#line 516 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 74:
#line 520 "assembler.y"
    {   allEvents = 0;  writePlaceMCStart((yyvsp[(2) - (3)].num));       ;}
    break;

  case 75:
#line 521 "assembler.y"
    {   (yyval.num) = (yyvsp[(5) - (6)].num);        writePlaceMCEnd(allEvents);  ;}
    break;

  case 76:
#line 525 "assembler.y"
    {   (yyval.str) = "";    ;}
    break;

  case 77:
#line 526 "assembler.y"
    {   (yyval.str) = (yyvsp[(2) - (2)].str);    ;}
    break;

  case 78:
#line 530 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 79:
#line 531 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 80:
#line 535 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);      ;}
    break;

  case 81:
#line 536 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num); ;}
    break;

  case 82:
#line 540 "assembler.y"
    {
                                                    curEvent = (yyvsp[(2) - (2)].num);
                                                    allEvents |= curEvent;
                                                ;}
    break;

  case 83:
#line 545 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(4) - (5)].num);
                                                    /*event action end*/
                                                    (yyval.num) += writeByte(0);
                                                    writeOnClipEvent(curEvent);
                                                    curEvent = 0;
                                                ;}
    break;

  case 84:
#line 555 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    curEvent += (yyvsp[(1) - (1)].num); ;}
    break;

  case 85:
#line 556 "assembler.y"
    {   (yyval.num) += (yyvsp[(3) - (3)].num);   curEvent += (yyvsp[(3) - (3)].num); ;}
    break;

  case 86:
#line 560 "assembler.y"
    {   yyerror("Missing mc event condition"); ;}
    break;

  case 87:
#line 561 "assembler.y"
    {   (yyval.num) = 0x01;      ;}
    break;

  case 88:
#line 562 "assembler.y"
    {   (yyval.num) = 0x02;      ;}
    break;

  case 89:
#line 563 "assembler.y"
    {   (yyval.num) = 0x04;      ;}
    break;

  case 90:
#line 564 "assembler.y"
    {   (yyval.num) = 0x08;      ;}
    break;

  case 91:
#line 565 "assembler.y"
    {   (yyval.num) = 0x10;      ;}
    break;

  case 92:
#line 566 "assembler.y"
    {   (yyval.num) = 0x20;      ;}
    break;

  case 93:
#line 567 "assembler.y"
    {   (yyval.num) = 0x40;      ;}
    break;

  case 94:
#line 568 "assembler.y"
    {   (yyval.num) = 0x80;      ;}
    break;

  case 95:
#line 569 "assembler.y"
    {   (yyval.num) = 0x100;     ;}
    break;

  case 96:
#line 570 "assembler.y"
    {   (yyval.num) = 0x200;     ;}
    break;

  case 97:
#line 571 "assembler.y"
    {   (yyval.num) = 0x400;     ;}
    break;

  case 98:
#line 572 "assembler.y"
    {   (yyval.num) = 0x800;     ;}
    break;

  case 99:
#line 573 "assembler.y"
    {   (yyval.num) = 0x1000;    ;}
    break;

  case 100:
#line 574 "assembler.y"
    {   (yyval.num) = 0x2000;    ;}
    break;

  case 101:
#line 575 "assembler.y"
    {   (yyval.num) = 0x4000;    ;}
    break;

  case 102:
#line 576 "assembler.y"
    {   (yyval.num) = 0x8000;    ;}
    break;

  case 103:
#line 577 "assembler.y"
    {   (yyval.num) = 0x10000;   ;}
    break;

  case 104:
#line 578 "assembler.y"
    {   (yyval.num) = 0x20000; writeByte((yyvsp[(2) - (2)].num));    ;}
    break;

  case 105:
#line 579 "assembler.y"
    {   (yyval.num) = 0x40000;   ;}
    break;

  case 106:
#line 583 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 107:
#line 584 "assembler.y"
    {   (yyval.num) += (yyvsp[(3) - (3)].num);   ;}
    break;

  case 108:
#line 588 "assembler.y"
    {   (yyval.num) = 0x01;  ;}
    break;

  case 109:
#line 589 "assembler.y"
    {   (yyval.num) = 0x02;  ;}
    break;

  case 110:
#line 590 "assembler.y"
    {   (yyval.num) = 0x04;  ;}
    break;

  case 111:
#line 591 "assembler.y"
    {   (yyval.num) = 0x08;  ;}
    break;

  case 112:
#line 592 "assembler.y"
    {   (yyval.num) = 0x10;  ;}
    break;

  case 113:
#line 593 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 114:
#line 597 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 115:
#line 598 "assembler.y"
    {   (yyval.num) = (yyvsp[(2) - (2)].num);    ;}
    break;

  case 116:
#line 602 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 117:
#line 603 "assembler.y"
    {   (yyval.num) = (yyvsp[(2) - (2)].num);    ;}
    break;

  case 118:
#line 607 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_TRY);
                                                    /* action length */
                                                    (yyval.num) += writeShort(strlen((yyvsp[(2) - (2)].str))+8);
                                                    /* zero flag */
                                                    (yyval.num) += writeByte(0);
                                                    /* zero try length */
                                                    (yyval.num) += writeShort(0);
                                                    /* zero catch length */
                                                    (yyval.num) += writeShort(0);
                                                    /* zero finally length */
                                                    (yyval.num) += writeShort(0);
                                                    /* error variable name */
                                                    (yyval.num) += writeString((yyvsp[(2) - (2)].str));
                                                ;}
    break;

  case 119:
#line 623 "assembler.y"
    {   (yyval.num) = (yyvsp[(3) - (4)].num) + (yyvsp[(4) - (4)].num); patchLength((yyval.num) - 6,  (yyvsp[(4) - (4)].num));    ;}
    break;

  case 120:
#line 624 "assembler.y"
    {   (yyval.num) = (yyvsp[(5) - (6)].num) + (yyvsp[(6) - (6)].num); patchLength((yyval.num) - 8,  (yyvsp[(6) - (6)].num));    ;}
    break;

  case 121:
#line 625 "assembler.y"
    {   (yyval.num) = (yyvsp[(7) - (8)].num) + (yyvsp[(8) - (8)].num); patchLength((yyval.num) - 10, (yyvsp[(8) - (8)].num));    ;}
    break;

  case 122:
#line 626 "assembler.y"
    {
                                                    byte flag = 0;
                                                    (yyval.num) = (yyvsp[(9) - (10)].num);
                                                    if ((yyvsp[(6) - (10)].num)>0)
                                                        flag = flag + 1;
                                                    if ((yyvsp[(8) - (10)].num)>0)
                                                        flag = flag + 2;
                                                    patchFlag((yyval.num) - 4, flag);
                                                ;}
    break;

  case 123:
#line 636 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_TRY);
                                                    /* action length */
                                                    (yyval.num) += writeShort(8);
                                                    /* zero flag */
                                                    (yyval.num) += writeByte(0);
                                                    /* zero try length */
                                                    (yyval.num) += writeShort(0);
                                                    /* zero catch length */
                                                    (yyval.num) += writeShort(0);
                                                    /* zero finally length */
                                                    (yyval.num) += writeShort(0);
                                                    /* error register number */
                                                    (yyval.num) += writeByte((byte) (yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 124:
#line 652 "assembler.y"
    {   (yyval.num) = (yyvsp[(3) - (4)].num) + (yyvsp[(4) - (4)].num); patchLength((yyval.num) - 6,  (yyvsp[(4) - (4)].num));    ;}
    break;

  case 125:
#line 653 "assembler.y"
    {   (yyval.num) = (yyvsp[(5) - (6)].num) + (yyvsp[(6) - (6)].num); patchLength((yyval.num) - 8,  (yyvsp[(6) - (6)].num));    ;}
    break;

  case 126:
#line 654 "assembler.y"
    {   (yyval.num) = (yyvsp[(7) - (8)].num) + (yyvsp[(8) - (8)].num); patchLength((yyval.num) - 10, (yyvsp[(8) - (8)].num));    ;}
    break;

  case 127:
#line 655 "assembler.y"
    {
                                                    byte flag = 4;
                                                    (yyval.num) = (yyvsp[(9) - (10)].num);
                                                    if ((yyvsp[(6) - (10)].num)>0)
                                                        flag = flag + 1;
                                                    if ((yyvsp[(8) - (10)].num)>0)
                                                        flag = flag + 2;
                                                    patchFlag((yyval.num) - 4, flag);
                                                ;}
    break;

  case 128:
#line 667 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 129:
#line 668 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num);   ;}
    break;

  case 130:
#line 672 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 131:
#line 673 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 132:
#line 674 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 133:
#line 675 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 134:
#line 676 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 135:
#line 677 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 136:
#line 678 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 137:
#line 679 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 138:
#line 680 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 139:
#line 681 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 140:
#line 686 "assembler.y"
    {   addLabel((yyvsp[(1) - (1)].str));   ;}
    break;

  case 141:
#line 693 "assembler.y"
    {   (yyval.num) = 0; ;}
    break;

  case 142:
#line 694 "assembler.y"
    {   func_args[0] = (yyvsp[(1) - (1)].str);  (yyval.num) = 1;         ;}
    break;

  case 143:
#line 695 "assembler.y"
    {   func_args[(yyvsp[(1) - (3)].num)] = (yyvsp[(3) - (3)].str); (yyval.num) = (yyvsp[(1) - (3)].num) + 1;    ;}
    break;

  case 144:
#line 699 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 145:
#line 700 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 146:
#line 704 "assembler.y"
    {   (yyval.str) = "";    ;}
    break;

  case 147:
#line 705 "assembler.y"
    {   (yyval.str) = (yyvsp[(1) - (1)].str);    ;}
    break;

  case 148:
#line 709 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_DEFINEFUNCTION);
                                                    /* zero block length */
                                                    (yyval.num) += writeShort(0);
                                                    (yyval.num) += writeString((yyvsp[(2) - (2)].str));
                                                ;}
    break;

  case 149:
#line 716 "assembler.y"
    {
                                                    unsigned int i;
                                                    numArgs = (yyvsp[(5) - (6)].num);

                                                    (yyval.num) = (yyvsp[(3) - (6)].num) + writeShort(numArgs);

                                                    for(i = 0; i < numArgs; ++i)
                                                        (yyval.num) += writeString(func_args[i]);

                                                    /* zero function length */
                                                    (yyval.num) += writeShort(0);
                                                    /* patch block length */
                                                    patchLength((yyval.num)-3, (yyval.num)-3);
                                                ;}
    break;

  case 150:
#line 731 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(7) - (9)].num) + (yyvsp[(8) - (9)].num);
                                                    /* patch function length */
                                                    patchLength((yyvsp[(8) - (9)].num), (yyvsp[(8) - (9)].num));
                                                ;}
    break;

  case 151:
#line 739 "assembler.y"
    {
                                                    numArgs++;
                                                    (yyval.num) = writeByte((byte) (yyvsp[(2) - (4)].num));

                                                    if ((yyvsp[(2) - (4)].num) == 0)
                                                        yyerror("Function argument can't be stored in r:0");

                                                    if ((yyvsp[(2) - (4)].num) + 1 >= MAX_REGISTERS)
                                                        yyerror("Too many registers");
                                                    
                                                    if (numArgs >= MAX_FUNCARGS)
                                                        yyerror("Too many function arguments");

                                                    if (regfunc_args[curFunc][(yyvsp[(2) - (4)].num)] != NULL)
                                                        yyerror("Duplicate register");

                                                    regfunc_args[curFunc][(yyvsp[(2) - (4)].num)] = (yyvsp[(4) - (4)].str);

                                                    if ((yyvsp[(2) - (4)].num) + 1 > (long int) numRegisters[curFunc])
                                                        numRegisters[curFunc] = (yyvsp[(2) - (4)].num) + 1;

                                                    /* if parameter is stored in register, may skip its name */
                                                    if ((yyvsp[(2) - (4)].num) > 0 && clearregisterargs && mode >= MODE_UPDATE)
                                                        (yyval.num) += writeString("");
                                                    else
                                                        (yyval.num) += writeString((yyvsp[(4) - (4)].str));
                                                ;}
    break;

  case 152:
#line 766 "assembler.y"
    {
                                                    numArgs++;
                                                    /* r:0 - not stored in register */
                                                    (yyval.num) = writeByte(0);
                                                    (yyval.num) += writeString((yyvsp[(1) - (1)].str));
                                                ;}
    break;

  case 153:
#line 775 "assembler.y"
    {   (yyval.num) = 0;         ;}
    break;

  case 154:
#line 776 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 155:
#line 777 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num);   ;}
    break;

  case 156:
#line 781 "assembler.y"
    {
                                                    unsigned int preloadFlag = 0, i;

                                                    if ((yyvsp[(2) - (4)].num) == 0 || (yyvsp[(2) - (4)].num) > MAX_AUTO_REGS)
                                                        yyerror("Automatic values should be placed into consequent registers starting with r:1\nin this order: this, arguments, super, _root, _parent, _global");

                                                    if (regfunc_args[curFunc][(yyvsp[(2) - (4)].num)] != NULL && strcmp(regfunc_args[curFunc][(yyvsp[(2) - (4)].num)], (yyvsp[(4) - (4)].str)))
                                                        yyerror("Duplicate register");

                                                    regfunc_args[curFunc][(yyvsp[(2) - (4)].num)] = (yyvsp[(4) - (4)].str);

                                                    if ((yyvsp[(2) - (4)].num) + 1 > (long int) numRegisters[curFunc])
                                                        numRegisters[curFunc] = (yyvsp[(2) - (4)].num) + 1;
                                                    
                                                    for (i = 0; i < MAX_AUTO_REGS; i++) {
                                                        if (!strcmp((yyvsp[(4) - (4)].str), arNames[i])) {
                                                            preloadFlag = arPreFlags[i];
                                                            if (nosuppressFlags & (1 << i))
                                                                yyerror("Duplicate automatic value");
                                                            break;
                                                        }
                                                    }

                                                    if (preloadFlag == 0)
                                                        yyerror("Only automatic values (this, arguments, super, _root, _parent, _global) are allowed here");
                                                    
                                                    if ((autoregFlags & preloadFlag) != preloadFlag)
                                                        autoregFlags += preloadFlag;
                                                    else
                                                        yyerror("Duplicate automatic value");
                                                ;}
    break;

  case 157:
#line 812 "assembler.y"
    {
                                                    unsigned int nosuppressFlag = 0, i;
                                                    for (i = 0; i < MAX_AUTO_REGS; i++) {
                                                        if (!strcmp((yyvsp[(1) - (1)].str), arNames[i])) {
                                                            nosuppressFlag = 1 << i;
                                                            if ((autoregFlags & arPreFlags[i]) == arPreFlags[i])
                                                                yyerror("Duplicate automatic value");
                                                            break;
                                                        }
                                                    }
                                                    if (nosuppressFlag == 0)
                                                        yyerror("Only automatic values (this, arguments, super, _root, _parent, _global) are allowed here");

                                                    if (!(nosuppressFlags & nosuppressFlag))
                                                        nosuppressFlags += nosuppressFlag;
                                                    else
                                                        yyerror("Duplicate automatic value");
                                                ;}
    break;

  case 158:
#line 833 "assembler.y"
    {   (yyval.num) = 0;         ;}
    break;

  case 159:
#line 834 "assembler.y"
    {   (yyval.num) = 1;         ;}
    break;

  case 160:
#line 835 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (3)].num) + 1;    ;}
    break;

  case 161:
#line 839 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_DEFINEFUNCTION2);
                                                    /* zero block length */
                                                    (yyval.num) += writeShort(0);
                                                    /* function name */
                                                    (yyval.num) += writeString((yyvsp[(2) - (2)].str));
                                                    curFunc++;
                                                    memset(regfunc_args[curFunc], 0, sizeof (regfunc_args[curFunc]));
                                                    numArgs = 0;
                                                    /* zero num of function arguments */
                                                    (yyval.num) += writeShort(numArgs);
                                                    /* allocate zero registers */
                                                    numRegisters[curFunc] = 0;
                                                    (yyval.num) += writeByte(numRegisters[curFunc]);
                                                    /* zero automatic register flags */
                                                    (yyval.num) += writeShort(0);
                                                ;}
    break;

  case 162:
#line 857 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(3) - (6)].num) + (yyvsp[(5) - (6)].num);
                                                    /* patch num of function arguments */
                                                    patchLength((yyvsp[(5) - (6)].num) + 3, numArgs);
                                                    autoregFlags = 0;
                                                    nosuppressFlags = 0;
                                                ;}
    break;

  case 163:
#line 865 "assembler.y"
    {
                                                    byte curautoreg = 1;
                                                    unsigned int i;

                                                    (yyval.num) = (yyvsp[(7) - (10)].num);
                                                    /* zero body length */
                                                    (yyval.num) += writeShort(0);
                                                    
                                                    /* make sure auto registers are allocated in the right order */
                                                    for (i = 0; i < MAX_AUTO_REGS; i++) {
                                                        if ((autoregFlags & arPreFlags[i]) == arPreFlags[i]) {
                                                            if (regfunc_args[curFunc][curautoreg] != NULL && !strcmp(regfunc_args[curFunc][curautoreg], arNames[i]))
                                                                curautoreg++;
                                                            else
                                                                yyerror("Automatic values should be placed into consequent registers starting with r:1\nin this order: this, arguments, super, _root, _parent, _global");
                                                        }
                                                        else if (!(nosuppressFlags & (1 << i)))
                                                            autoregFlags += arSupFlags[i];
                                                    }

                                                    /* patch automatic register flags */
                                                    patchLength((yyval.num) - (yyvsp[(3) - (10)].num), autoregFlags);
                                                    /* patch block length */
                                                    patchLength((yyval.num) - 3, (yyval.num) - 3);
                                                ;}
    break;

  case 164:
#line 891 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(11) - (13)].num) + (yyvsp[(12) - (13)].num);

                                                    /* patch number of registers to allocate */
                                                    if (numRegisters[curFunc] < MAX_REGISTERS)
                                                        patchFlag((yyval.num) - (yyvsp[(3) - (13)].num) + 2, (byte) numRegisters[curFunc]);
                                                    else
                                                        yyerror("Too many registers.");

                                                    /* patch function length */
                                                    patchLength((yyvsp[(12) - (13)].num), (yyvsp[(12) - (13)].num));
                                                    curFunc--;
                                                ;}
    break;

  case 165:
#line 907 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_WITH);
                                                    /* length of with action */
                                                    (yyval.num) += writeShort(2);
                                                    /* length of with block - will be patched */
                                                    (yyval.num) += writeShort(0);
                                                ;}
    break;

  case 166:
#line 915 "assembler.y"
    { 
                                                    (yyval.num) = (yyvsp[(2) - (4)].num) + (yyvsp[(3) - (4)].num);
                                                    patchLength((yyvsp[(3) - (4)].num), (yyvsp[(3) - (4)].num));
                                                ;}
    break;

  case 167:
#line 923 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_SETTARGET);
                                                    (yyval.num) += writeShort(strlen((yyvsp[(2) - (2)].str))+1);
                                                    (yyval.num) += writeString((yyvsp[(2) - (2)].str));
                                                ;}
    break;

  case 168:
#line 929 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(4) - (5)].num) + writeByte(SWFACTION_SETTARGET);
                                                    (yyval.num) += (yyvsp[(3) - (5)].num) + writeShort(1);
                                                    (yyval.num) += writeByte(0);
                                                ;}
    break;

  case 169:
#line 937 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SETTARGETEXPRESSION);  ;}
    break;

  case 170:
#line 938 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(3) - (4)].num) + writeByte(SWFACTION_SETTARGET);
                                                    (yyval.num) += (yyvsp[(2) - (4)].num) + writeShort(1);
                                                    (yyval.num) += writeByte(0);
                                                ;}
    break;

  case 171:
#line 946 "assembler.y"
    {
                                                    if (frameloadedStart>-1)
                                                        yyerror("IfFrameLoaded actions can't be nested");
                                                    (yyval.num) = writeByte(SWFACTION_IFFRAMELOADEDEXPRESSION);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(0);
                                                    frameloadedStart = numActions;
                                                ;}
    break;

  case 172:
#line 955 "assembler.y"
    { 
                                                    (yyval.num) = (yyvsp[(2) - (4)].num) + (yyvsp[(3) - (4)].num);
                                                    patchFrameLoaded((yyvsp[(3) - (4)].num), numActions-frameloadedStart);
                                                    frameloadedStart = -1;
                                                ;}
    break;

  case 173:
#line 963 "assembler.y"
    {
                                                    if (frameloadedStart>-1)
                                                        yyerror("IfFrameLoaded actions can't be nested");
                                                    (yyval.num) = writeByte(SWFACTION_IFFRAMELOADED);
                                                    (yyval.num) += writeShort(3);
                                                    (yyval.num) += writeShort((yyvsp[(2) - (2)].num));
                                                    (yyval.num) += writeByte(0);
                                                    frameloadedStart = numActions;
                                                ;}
    break;

  case 174:
#line 973 "assembler.y"
    { 
                                                    (yyval.num) = (yyvsp[(3) - (5)].num) + (yyvsp[(4) - (5)].num);
                                                    patchFrameLoaded((yyvsp[(4) - (5)].num), numActions-frameloadedStart);
                                                    frameloadedStart = -1;
                                                ;}
    break;

  case 175:
#line 981 "assembler.y"
    {   numAssets = 0;  ;}
    break;

  case 176:
#line 982 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(5) - (6)].num);
                                                    writeImportAssets((yyvsp[(3) - (6)].str), numAssets);
                                                    (yyval.num) = 0;
                                                ;}
    break;

  case 177:
#line 990 "assembler.y"
    {   (yyval.num) = 0;         ;}
    break;

  case 178:
#line 991 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 179:
#line 995 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 180:
#line 996 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num);   ;}
    break;

  case 181:
#line 1000 "assembler.y"
    {
                                                    (yyval.num) = strlen((yyvsp[(1) - (3)].str))+3;
                                                    writeShort((yyvsp[(3) - (3)].num));
                                                    writeString((yyvsp[(1) - (3)].str));
                                                    numAssets++;
                                                ;}
    break;

  case 182:
#line 1009 "assembler.y"
    {   numAssets = 0;  ;}
    break;

  case 183:
#line 1010 "assembler.y"
    {
                                                    (yyval.num) = (yyvsp[(3) - (4)].num);
                                                    writeExportAssets(numAssets);
                                                    (yyval.num) = 0;
                                                ;}
    break;

  case 184:
#line 1018 "assembler.y"
    {   (yyval.num) = 0;         ;}
    break;

  case 185:
#line 1019 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 186:
#line 1023 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);        ;}
    break;

  case 187:
#line 1024 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (2)].num) + (yyvsp[(2) - (2)].num);   ;}
    break;

  case 188:
#line 1028 "assembler.y"
    {
                                                    (yyval.num) = strlen((yyvsp[(3) - (3)].str))+3;
                                                    writeShort((yyvsp[(1) - (3)].num));
                                                    writeString((yyvsp[(3) - (3)].str));
                                                    numAssets++;
                                                ;}
    break;

  case 189:
#line 1037 "assembler.y"
    {   (yyval.num) = writePushString((yyvsp[(1) - (1)].str));   ;}
    break;

  case 190:
#line 1039 "assembler.y"
    {
                                                    if ((yyvsp[(1) - (1)].num) < 256) {
                                                        /* constant, 1-byte reference */
                                                        (yyval.num) = writeByte(0x08);
                                                        (yyval.num) += writeByte((byte)(yyvsp[(1) - (1)].num));
                                                    }
                                                    else {
                                                        /* constant, 2-byte reference */
                                                        (yyval.num) = writeByte(0x09);
                                                        (yyval.num) += writeShort((yyvsp[(1) - (1)].num));
                                                    }
                                                ;}
    break;

  case 191:
#line 1051 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x01);
                                                    (yyval.num) += writeFloat((float)(yyvsp[(1) - (1)].num));
                                                ;}
    break;

  case 192:
#line 1056 "assembler.y"
    {
                                                    float f;
                                                    sscanf((yyvsp[(1) - (1)].str), "%f", &f);
                                                    (yyval.num) = writeByte(0x01);
                                                    (yyval.num) += writeFloat(f);
                                                ;}
    break;

  case 193:
#line 1063 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x01);
                                                    (yyval.num) += writeFloat(0.0f/0.0f);
                                                ;}
    break;

  case 194:
#line 1068 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x01);
                                                    (yyval.num) += writeFloat(1.0/0.0f);
                                                ;}
    break;

  case 195:
#line 1073 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x01);
                                                    (yyval.num) += writeFloat(-1.0/0.0f);
                                                ;}
    break;

  case 196:
#line 1078 "assembler.y"
    {
                                                    unsigned long int li = xtoi((yyvsp[(1) - (1)].str));
                                                    if (li > 65535)
                                                        yyerror("Hex number should be unsigned integer in the range from 0x0000 to 0xFFFF");

                                                    (yyval.num) = writeByte(0x07);
                                                    (yyval.num) += writeLongInt(xtoi((yyvsp[(1) - (1)].str)));
                                                ;}
    break;

  case 197:
#line 1087 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x07);
                                                    (yyval.num) += writeLongInt((yyvsp[(1) - (1)].num));
                                                ;}
    break;

  case 198:
#line 1092 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x06);
                                                    (yyval.num) += writeDouble(atof((yyvsp[(1) - (1)].str)));
                                                ;}
    break;

  case 199:
#line 1097 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x06);
                                                    (yyval.num) += writeDouble(0.0/0.0);
                                                ;}
    break;

  case 200:
#line 1102 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x06);
                                                    (yyval.num) += writeDouble(1.0/0.0);
                                                ;}
    break;

  case 201:
#line 1107 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x06);
                                                    (yyval.num) += writeDouble(-1.0/0.0);
                                                ;}
    break;

  case 202:
#line 1112 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x05);
                                                    (yyval.num) += writeByte(1);
                                                ;}
    break;

  case 203:
#line 1117 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x05);
                                                    (yyval.num) += writeByte(0);
                                                ;}
    break;

  case 204:
#line 1122 "assembler.y"
    {   (yyval.num) = writeByte(2);  ;}
    break;

  case 205:
#line 1124 "assembler.y"
    {   (yyval.num) = writeByte(3);  ;}
    break;

  case 206:
#line 1126 "assembler.y"
    {
                                                    (yyval.num) = writeByte(0x04);
                                                    (yyval.num) += writeByte((byte)(yyvsp[(1) - (1)].num));
                                                ;}
    break;

  case 207:
#line 1133 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 208:
#line 1134 "assembler.y"
    {   (yyval.num) = 1;     ;}
    break;

  case 209:
#line 1135 "assembler.y"
    {   (yyval.num) = 2;     ;}
    break;

  case 210:
#line 1136 "assembler.y"
    {   (yyval.num) = 3;     ;}
    break;

  case 211:
#line 1137 "assembler.y"
    {   (yyval.num) = 4;     ;}
    break;

  case 212:
#line 1138 "assembler.y"
    {   (yyval.num) = 5;     ;}
    break;

  case 213:
#line 1139 "assembler.y"
    {   (yyval.num) = 6;     ;}
    break;

  case 214:
#line 1140 "assembler.y"
    {   (yyval.num) = 7;     ;}
    break;

  case 215:
#line 1141 "assembler.y"
    {   (yyval.num) = 8;     ;}
    break;

  case 216:
#line 1142 "assembler.y"
    {   (yyval.num) = 9;     ;}
    break;

  case 217:
#line 1143 "assembler.y"
    {   (yyval.num) = 10;    ;}
    break;

  case 218:
#line 1144 "assembler.y"
    {   (yyval.num) = 11;    ;}
    break;

  case 219:
#line 1145 "assembler.y"
    {   (yyval.num) = 12;    ;}
    break;

  case 220:
#line 1146 "assembler.y"
    {   (yyval.num) = 13;    ;}
    break;

  case 221:
#line 1147 "assembler.y"
    {   (yyval.num) = 14;    ;}
    break;

  case 222:
#line 1148 "assembler.y"
    {   (yyval.num) = 15;    ;}
    break;

  case 223:
#line 1149 "assembler.y"
    {   (yyval.num) = 16;    ;}
    break;

  case 224:
#line 1150 "assembler.y"
    {   (yyval.num) = 17;    ;}
    break;

  case 225:
#line 1151 "assembler.y"
    {   (yyval.num) = 18;    ;}
    break;

  case 226:
#line 1152 "assembler.y"
    {   (yyval.num) = 19;    ;}
    break;

  case 227:
#line 1153 "assembler.y"
    {   (yyval.num) = 20;    ;}
    break;

  case 228:
#line 1154 "assembler.y"
    {   (yyval.num) = 21;    ;}
    break;

  case 229:
#line 1158 "assembler.y"
    {   (yyval.num) = (yyvsp[(1) - (1)].num);    ;}
    break;

  case 230:
#line 1159 "assembler.y"
    {   (yyval.num) += (yyvsp[(3) - (3)].num);   ;}
    break;

  case 231:
#line 1163 "assembler.y"
    {   addConstant((yyvsp[(1) - (1)].str));    ;}
    break;

  case 232:
#line 1164 "assembler.y"
    {   addConstant((yyvsp[(3) - (3)].str));    ;}
    break;

  case 233:
#line 1168 "assembler.y"
    {   ;}
    break;

  case 234:
#line 1169 "assembler.y"
    {   ;}
    break;

  case 235:
#line 1173 "assembler.y"
    {
                                                    if (xtoi((yyvsp[(1) - (1)].str))>0xff)
                                                        yyerror("Action data must be a byte list");
                                                    (yyval.num) = writeByte((char)xtoi((yyvsp[(1) - (1)].str)));
                                                ;}
    break;

  case 236:
#line 1179 "assembler.y"
    {
                                                    if (xtoi((yyvsp[(3) - (3)].str))>0xff)
                                                        yyerror("Action data must be a byte list");
                                                    (yyval.num) += writeByte((char)xtoi((yyvsp[(3) - (3)].str)));
                                                ;}
    break;

  case 237:
#line 1187 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 238:
#line 1188 "assembler.y"
    {   (yyval.num) = (yyvsp[(2) - (2)].num);    ;}
    break;

  case 239:
#line 1192 "assembler.y"
    {   (yyval.num) = 0;     ;}
    break;

  case 240:
#line 1193 "assembler.y"
    {   (yyval.num) = 1;     ;}
    break;

  case 241:
#line 1194 "assembler.y"
    {   (yyval.num) = 2;     ;}
    break;

  case 242:
#line 1198 "assembler.y"
    {   nConstants = 0;         ;}
    break;

  case 243:
#line 1199 "assembler.y"
    {   (yyval.num) = writeConstants();  ;}
    break;

  case 244:
#line 1201 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_PUSHDATA);
                                                    /* length */
                                                    (yyval.num) += writeShort(0);
                                                ;}
    break;

  case 245:
#line 1207 "assembler.y"
    {   
                                                    (yyval.num) = (yyvsp[(2) - (3)].num) + (yyvsp[(3) - (3)].num);
                                                    patchLength((yyvsp[(3) - (3)].num), (yyvsp[(3) - (3)].num));
                                                ;}
    break;

  case 246:
#line 1212 "assembler.y"
    {
                                                    if (xtoi((yyvsp[(2) - (2)].str))>0xff)
                                                        yyerror("Action code out of range");
                                                    (yyval.num) = writeByte((char)xtoi((yyvsp[(2) - (2)].str)));
                                                    if (xtoi((yyvsp[(2) - (2)].str))>=0x80)
                                                    /* length */
                                                    (yyval.num) += writeShort(0);
                                                ;}
    break;

  case 247:
#line 1221 "assembler.y"
    {
                                                    if (((yyvsp[(4) - (4)].num)>0) && (xtoi((yyvsp[(2) - (4)].str))>=0x80))
                                                        patchLength((yyvsp[(4) - (4)].num), (yyvsp[(4) - (4)].num));
                                                    (yyval.num) = (yyvsp[(3) - (4)].num) + (yyvsp[(4) - (4)].num);
                                                ;}
    break;

  case 248:
#line 1227 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_SETREGISTER);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte((byte)(yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 249:
#line 1233 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STRICTEQUALS);     ;}
    break;

  case 250:
#line 1234 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_GREATERTHAN);      ;}
    break;

  case 251:
#line 1235 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_ENUMERATEVALUE);   ;}
    break;

  case 252:
#line 1236 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_INSTANCEOF);       ;}
    break;

  case 253:
#line 1237 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_NEXTFRAME);        ;}
    break;

  case 254:
#line 1238 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_PREVFRAME);        ;}
    break;

  case 255:
#line 1239 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_PLAY);             ;}
    break;

  case 256:
#line 1240 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STOP);             ;}
    break;

  case 257:
#line 1241 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_TOGGLEQUALITY);    ;}
    break;

  case 258:
#line 1242 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STOPSOUNDS);       ;}
    break;

  case 259:
#line 1243 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_CALLFUNCTION);     ;}
    break;

  case 260:
#line 1244 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_RETURN);           ;}
    break;

  case 261:
#line 1245 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_NEWMETHOD);        ;}
    break;

  case 262:
#line 1246 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_CALLMETHOD);       ;}
    break;

  case 263:
#line 1247 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_BITWISEAND);       ;}
    break;

  case 264:
#line 1248 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_BITWISEOR);        ;}
    break;

  case 265:
#line 1249 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_BITWISEXOR);       ;}
    break;

  case 266:
#line 1250 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_MODULO);           ;}
    break;

  case 267:
#line 1251 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_NEWADD);           ;}
    break;

  case 268:
#line 1252 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_NEWLESSTHAN);      ;}
    break;

  case 269:
#line 1253 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_NEWEQUALS);        ;}
    break;

  case 270:
#line 1254 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_TONUMBER);         ;}
    break;

  case 271:
#line 1255 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_TOSTRING);         ;}
    break;

  case 272:
#line 1256 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_INCREMENT);        ;}
    break;

  case 273:
#line 1257 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_DECREMENT);        ;}
    break;

  case 274:
#line 1258 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_TYPEOF);           ;}
    break;

  case 275:
#line 1259 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_TARGETPATH);       ;}
    break;

  case 276:
#line 1260 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_ENUMERATE);        ;}
    break;

  case 277:
#line 1261 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_DELETE);           ;}
    break;

  case 278:
#line 1262 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_DELETE2);          ;}
    break;

  case 279:
#line 1263 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_NEW);              ;}
    break;

  case 280:
#line 1264 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_INITARRAY);        ;}
    break;

  case 281:
#line 1265 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_INITOBJECT);       ;}
    break;

  case 282:
#line 1266 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_GETMEMBER);        ;}
    break;

  case 283:
#line 1267 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SETMEMBER);        ;}
    break;

  case 284:
#line 1268 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SHIFTLEFT);        ;}
    break;

  case 285:
#line 1269 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SHIFTRIGHT);       ;}
    break;

  case 286:
#line 1270 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SHIFTRIGHT2);      ;}
    break;

  case 287:
#line 1271 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_VAR);              ;}
    break;

  case 288:
#line 1272 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_VAREQUALS);        ;}
    break;

  case 289:
#line 1273 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_ADD);              ;}
    break;

  case 290:
#line 1274 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SUBTRACT);         ;}
    break;

  case 291:
#line 1275 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_MULTIPLY);         ;}
    break;

  case 292:
#line 1276 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_DIVIDE);           ;}
    break;

  case 293:
#line 1277 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_EQUALS);           ;}
    break;

  case 294:
#line 1278 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_LESSTHAN);         ;}
    break;

  case 295:
#line 1279 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_FSCOMMAND2);       ;}
    break;

  case 296:
#line 1280 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_LOGICALAND);       ;}
    break;

  case 297:
#line 1281 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_LOGICALOR);        ;}
    break;

  case 298:
#line 1282 "assembler.y"
    {
                                                    if (mode >= MODE_UPDATE) {
                                                        /* strip double nots */
                                                        (yyval.num) = 0;
                                                        numActions -= 2;
                                                    }
                                                    else {
                                                        (yyval.num) = writeByte(SWFACTION_LOGICALNOT);
                                                        (yyval.num) += writeByte(SWFACTION_LOGICALNOT);
                                                    }
                                                ;}
    break;

  case 299:
#line 1293 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_LOGICALNOT);       ;}
    break;

  case 300:
#line 1294 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STRINGEQ);         ;}
    break;

  case 301:
#line 1295 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STRINGLENGTH);     ;}
    break;

  case 302:
#line 1296 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SUBSTRING);        ;}
    break;

  case 303:
#line 1297 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_INT);              ;}
    break;

  case 304:
#line 1298 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_DUP);              ;}
    break;

  case 305:
#line 1299 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SWAP);             ;}
    break;

  case 306:
#line 1300 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_POP);              ;}
    break;

  case 307:
#line 1301 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_GETVARIABLE);      ;}
    break;

  case 308:
#line 1302 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SETVARIABLE);      ;}
    break;

  case 309:
#line 1303 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STRINGCONCAT);     ;}
    break;

  case 310:
#line 1304 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_GETPROPERTY);      ;}
    break;

  case 311:
#line 1305 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_SETPROPERTY);      ;}
    break;

  case 312:
#line 1306 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_DUPLICATECLIP);    ;}
    break;

  case 313:
#line 1307 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_REMOVECLIP);       ;}
    break;

  case 314:
#line 1308 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_TRACE);            ;}
    break;

  case 315:
#line 1309 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STARTDRAGMOVIE);   ;}
    break;

  case 316:
#line 1310 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STOPDRAGMOVIE);    ;}
    break;

  case 317:
#line 1311 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STRINGLESSTHAN);   ;}
    break;

  case 318:
#line 1312 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_STRINGGREATERTHAN);;}
    break;

  case 319:
#line 1313 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_RANDOM);           ;}
    break;

  case 320:
#line 1314 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_MBLENGTH);         ;}
    break;

  case 321:
#line 1315 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_ORD);              ;}
    break;

  case 322:
#line 1316 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_CHR);              ;}
    break;

  case 323:
#line 1317 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_GETTIMER);         ;}
    break;

  case 324:
#line 1318 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_MBSUBSTRING);      ;}
    break;

  case 325:
#line 1319 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_MBORD);            ;}
    break;

  case 326:
#line 1320 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_MBCHR);            ;}
    break;

  case 327:
#line 1321 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_IMPLEMENTS);       ;}
    break;

  case 328:
#line 1322 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_EXTENDS);          ;}
    break;

  case 329:
#line 1323 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_THROW);            ;}
    break;

  case 330:
#line 1324 "assembler.y"
    {   (yyval.num) = writeByte(SWFACTION_CAST);             ;}
    break;

  case 331:
#line 1326 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_CALLFRAME);
                                                    (yyval.num) += writeShort(0);
                                                ;}
    break;

  case 332:
#line 1331 "assembler.y"
    {   
                                                    (yyval.num) = writeByte(SWFACTION_GOTOEXPRESSION);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(0);
                                                ;}
    break;

  case 333:
#line 1337 "assembler.y"
    {   
                                                    (yyval.num) = writeByte(SWFACTION_GOTOEXPRESSION);
                                                    (yyval.num) += writeShort(3);
                                                    (yyval.num) += writeByte(2);
                                                    (yyval.num) += writeShort((yyvsp[(3) - (3)].num));
                                                ;}
    break;

  case 334:
#line 1344 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GOTOEXPRESSION);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(1);
                                                ;}
    break;

  case 335:
#line 1350 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GOTOEXPRESSION);
                                                    (yyval.num) += writeShort(3);
                                                    (yyval.num) += writeByte(3);
                                                    (yyval.num) += writeShort((yyvsp[(3) - (3)].num));
                                                ;}
    break;

  case 336:
#line 1357 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GOTOLABEL);
                                                    (yyval.num) += writeShort(strlen((yyvsp[(2) - (2)].str))+1);
                                                    (yyval.num) += writeString((yyvsp[(2) - (2)].str));
                                                ;}
    break;

  case 337:
#line 1363 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_BRANCHALWAYS);
                                                    (yyval.num) += writeShort(2);
                                                    (yyval.num) += branchTarget((yyvsp[(2) - (2)].str));
                                                ;}
    break;

  case 338:
#line 1369 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_BRANCHALWAYS);
                                                    (yyval.num) += writeShort(2);
                                                    (yyval.num) += addNumLabel((yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 339:
#line 1375 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_BRANCHIFTRUE);
                                                    (yyval.num) += writeShort(2);
                                                    (yyval.num) += branchTarget((yyvsp[(2) - (2)].str));
                                                ;}
    break;

  case 340:
#line 1381 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_BRANCHIFTRUE);
                                                    (yyval.num) += writeShort(2);
                                                    (yyval.num) += addNumLabel((yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 341:
#line 1387 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GOTOFRAME);
                                                    (yyval.num) += writeShort(2);
                                                    (yyval.num) += writeShort((yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 342:
#line 1393 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GETURL);
                                                    (yyval.num) += writeShort(strlen((yyvsp[(2) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+2);
                                                    (yyval.num) += writeString((yyvsp[(2) - (3)].str)); 
                                                    (yyval.num) += writeString((yyvsp[(3) - (3)].str));
                                                ;}
    break;

  case 343:
#line 1400 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GETURL2);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte((yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 344:
#line 1406 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GETURL2);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(0xc0 + (yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 345:
#line 1412 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GETURL2);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(0x80 + (yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 346:
#line 1418 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GETURL2);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(0x40 + (yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 347:
#line 1424 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_GETURL2);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte((yyvsp[(2) - (2)].num));
                                                ;}
    break;

  case 348:
#line 1430 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_STRICTMODE);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(1);
                                                ;}
    break;

  case 349:
#line 1436 "assembler.y"
    {
                                                    (yyval.num) = writeByte(SWFACTION_STRICTMODE);
                                                    (yyval.num) += writeShort(1);
                                                    (yyval.num) += writeByte(0);
                                                ;}
    break;

  case 350:
#line 1442 "assembler.y"
    {   yyerror("Movie declaration inside of the action block");    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4696 "assembler.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



