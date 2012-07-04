/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 46 "assembler.y"
{
  long int num;
  char *str;
}
/* Line 1529 of yacc.c.  */
#line 510 "assembler.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

