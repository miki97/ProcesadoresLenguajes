/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OP_OR = 258,
    OP_XOR = 259,
    OP_AND = 260,
    OP_IGUALDAD = 261,
    OP_RELACION = 262,
    MAS_MENOS = 263,
    MAS_MAS = 264,
    OP_MULTI_DIV = 265,
    OP_GET_LIST = 266,
    OP_BIN_LISTA = 267,
    OP_LIST_CONCA = 268,
    OP_UNARIO = 269,
    INICIO = 270,
    PAREN_IZQ = 271,
    PAREN_DER = 272,
    CORCH_IZQ = 273,
    CORCH_DER = 274,
    LLAVE_IZQ = 275,
    LLAVE_DER = 276,
    VAR_IZQ = 277,
    VAR_DER = 278,
    DELIMIT = 279,
    SEPAR = 280,
    TIPO = 281,
    TIPO_LIST = 282,
    IDENT = 283,
    CONST_BOOL = 284,
    CONST_CAR = 285,
    CONST_CADENA = 286,
    CONST_ENT = 287,
    CONST_REAL = 288,
    IGUAL = 289,
    COND_SI = 290,
    COND_OTRO = 291,
    BUCLE = 292,
    FOR_INI = 293,
    FOR_STOP = 294,
    FOR_STEP = 295,
    FOR_DO = 296,
    ENTRADA = 297,
    SALIDA = 298,
    DEVUELVE = 299,
    OP_INI_LIST = 300,
    OP_AVR_RETR = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
