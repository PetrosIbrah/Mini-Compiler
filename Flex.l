/*=================================================================================================*/
%option noyywrap
%x error
/* C code, includes, global variables and Function Declaration*/
%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "Bison.tab.h"

    void FatalErrMsg(char *s);
    void prn(char *s);
    void PrintError (char* s);
    void PrintWarning (char* s);

    /* Global variables */
    extern int line;
    extern int FatalError;
    extern int bs;
    extern int CorrectWords;
    extern int WordErrors;
    extern int WordWarnings;
    int cnt;
%}
/* ============================================================================ */
/* Expressions Declarations */
/* Some if these are similar to Expressions mentioned in our A2 files. */
DELIMITER       [;]+
INTEGER         ([1-9][0-9]*)|(0[0-7]+)|(0[xX][0-9A-F]+)|(0)
FLOAT           ([1-9][0-9]*)(((\.)([1-9][0-9]*)([eE][-+]?[0-9]+)?)|([eE][-+]?[0-9]+))
WHITESPACE      [ \t\f\r]+
VARIABLE	    [a-zA-Z_][a-zA-Z0-9_]{0,9}
WARNVARIABLE    [0-9]+[a-zA-Z_][a-zA-Z0-9_]{0,9}
COMMENT         ([/]{2,}.*)|((\/\*)(.|\s)*(\*\/))
WARNCOMMENT     ((\/\*)(.|\s)*(\*))
FATALCOMMENT    \/\*[^*]*$
FATALCOMMENT2   [^/*]*\*\/
STRING          \"[^\\\"\n.]*\"
FATALSTRING     \"[^\\\"\n.]*
BNL             [\\]
NEWLINE         \n
UNKNOWN         .
/* ============================================================================ */

%%
{DELIMITER}      { prn("DELIMITER"); return DELIMITER; }
{INTEGER}        { CorrectWords++; prn("INTEGER"); return INTEGER; }
"int"            { CorrectWords++; prn("INT"); return SINT; }
"double"         { CorrectWords++; prn("DOUBLE"); return SDOUBLE; }
"doubl"          { prn("DOUBLE"); PrintWarning("Did you want to type 'double'?"); return SDOUBLE; }
"float"          { CorrectWords++; prn("FLOAT"); return SFLOAT; }
"floa"           { prn("FLOAT"); PrintWarning("Did you want to type 'float'?"); return SFLOAT; }
"string"         { CorrectWords++; prn("STRING"); return SSTRING; }
"strin"          { prn("STRING"); PrintWarning("Did you want to type 'string'?"); return SSTRING; }
"long"           { CorrectWords++; prn("LONG"); return SLONG; }
"short"          { CorrectWords++; prn("SHORT"); return SSHORT; }
"shor"           { prn("SHORT"); PrintWarning("Did you want to type 'short'?"); return SSHORT; }
"scan"           { CorrectWords++; prn("SCAN"); return SCAN; }
"print"          { CorrectWords++; prn("PRINT"); return PRINT; }
"prant"          { prn("PRINT"); PrintWarning("Did you want to type 'print'?"); return PRINT; }
"prin"           { prn("PRINT"); PrintWarning("Did you want to type 'print'?"); return PRINT; }
"len"            { CorrectWords++; prn("LEN"); return LEN; }
"cmp"            { CorrectWords++; prn("CMP"); return CMP; }
"if"             { CorrectWords++; prn("IF"); return IF; }
"while"          { CorrectWords++; prn("WHILE"); return WHILE; }
"whil"           { prn("WHILE"); PrintWarning("Did you want to type 'while'?"); return WHILE; }
"for"            { CorrectWords++; prn("FOR"); return FOR; }
"func"           { CorrectWords++; prn("FUNC"); return FUNC; }
"="		         { prn("ASSIGNOP"); return ASSIGNOP; }
"+"		         { prn("PLUS"); return PLUS; }
"++"		     { prn("PLUSPLUS"); return PLUSPLUS; }
"-"		         { prn("MINUS"); return MINUS; }
"*"		         { prn("TIMES"); return TIMES; }
"/"		         { prn("DIVIDE"); return DIVIDE; }
"<"		         { prn("LESSTHAN"); return LESSTHAN; }
">"		         { prn("GREATERTHAN"); return GREATERTHAN; }
"<="		     { prn("LESSTHANOREQUAL"); return LESSTHANOREQUAL; }
">="		     { prn("GREATERTHANOREQUAL"); return GREATERTHANOREQUAL; }
"!="		     { prn("NOTEQUAL"); return NOTEQUAL; }
"=="		     { prn("EQUALTO"); return EQUALTO; }
"("		         { prn("LP"); return LP; }
")"		         { prn("RP"); return RP; }
"["		         { prn("LB"); return LB; }
"]"		         { prn("RB"); return RB; }
"{"		         { prn("LSB"); return LSB; }
"}"		         { prn("RSB"); return RSB; }
","		         { prn("COMMA"); return COMMA; }
"\\"             { bs=1; }
{FLOAT}          { CorrectWords++; prn("FLOAT"); return FLOAT; }
{WHITESPACE}     {  }
{VARIABLE}       { CorrectWords++; prn("VARIABLE"); return VARIABLE; }
{WARNVARIABLE}   { prn("VARIABLE"); PrintWarning("Wrong Variable Naming"); return VARIABLE; }
{COMMENT}        { return COMMENT;}
{WARNCOMMENT}    { PrintWarning("forgot to Close Comment?"); return COMMENT; }
{FATALCOMMENT}   { FatalErrMsg("Didn't Close Comment"); FatalError++; return ENDOFFILE; }
{FATALCOMMENT2}  { FatalErrMsg("Didn't Start Comment"); FatalError++; return ENDOFFILE; }
{STRING}         { CorrectWords++; prn("STRING"); return STRING; }
{FATALSTRING}    { FatalErrMsg("Didn't Close String"); FatalError++; return ENDOFFILE; }
{NEWLINE}        { if(bs!=1){line++;} bs=0; }
<<EOF>>		     { printf("#END-OF-FILE#\n"); return ENDOFFILE; }
{UNKNOWN}        { WordErrors++; PrintError("Unrecognized."); BEGIN(error); return TOKEN_ERROR; }

<error>.[\t]+    { BEGIN(0); }
<error>.         { }
<error>\n        {BEGIN(0); line++;}
%%

/* Main C code*/
/* =================================== */
void FatalErrMsg(char *s){
    printf("\n\t# FATAL ERROR! # | %s\n", s);
    return; 
}
void prn(char *s){
	printf("\n\t%s: %s ", s, yytext);
	return;
}
void PrintWarning (char* s){
    WordWarnings++;
    fprintf(yyout,"\tWarning line %d, %s\n",line, s);
    return;
}
void PrintError(char* s){
    fprintf(yyout,"\tERROR, line %d |\'%s\': %s\n",line, yytext, s);
    return;
}