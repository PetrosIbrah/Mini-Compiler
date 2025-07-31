
%{
/* C code, includes, defines, global variables and function Declarations */
        #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
        #define YYSTYPE char *

        void PrintWarningS (char* s);
        int yylex(void);
        void TheEnd();
        void yyerror(char *);
        void FatalErrMsg(char *s);

        extern char *yytext;
        extern FILE *yyin;
        int FatalError = 0;
        int WordWarnings = 0;
        int SyntaxWarnings = 0;
        int SyntaxErrorCount = 0;
        int line=1;
        int bs = 0;
        int WordErrors = 0;
        int CorrectSyntax = 0;
        int CorrectWords = 0;
        int LeftSide = 0, RightSide = 0;
        int content_counter = 0;
%}
/* Token Declarations. */
/* =================== */
%token INTEGER VARIABLE FLOAT STRING SDOUBLE SLONG SSHORT SINT SFLOAT SSTRING 
%token ASSIGNOP PLUS MINUS TIMES DIVIDE PLUSPLUS OPERATOR
%token EQUALTO NOTEQUAL GREATERTHANOREQUAL LESSTHANOREQUAL GREATERTHAN LESSTHAN
%token IF WHILE FOR SCAN PRINT LEN CMP FUNC LP RP LB RB LSB RSB KEYWORD
%token UNKNOWN WHITESPACE ENDOFFILE  DELIMITER BNL TOKEN_ERROR NEWLINE COMMENT COMMA
%start program
%%

/* Syntax Rules. */
/* ================================================================================================================ */

/* Initial Program */
program : program Syntax
        | program Faults
        |
        ;
Syntax  : decl          {CorrectSyntax++;}
	| assign        {CorrectSyntax++;}
	| numbarr       {CorrectSyntax++;}
	| scan_func     {CorrectSyntax++;}
	| print_func    {CorrectSyntax++;}
	| len_func      {CorrectSyntax++;}
	| cmp_func      {CorrectSyntax++;}
        | func_func     {CorrectSyntax++;}
        | func_call     {CorrectSyntax++;}
        | expr_func     {CorrectSyntax++;}
        | compare       {CorrectSyntax++;}
        | mergarr       {CorrectSyntax++;}
        | if_func       {CorrectSyntax++;}
        | while_loop    {CorrectSyntax++;}
        | for_loop      {CorrectSyntax++;}
        | ENDOFFILE     {TheEnd();}    
        | COMMENT  

/* program2 is made for avoiding nested functions */
program2 : program2 Syntax2
         | program2 Faults
         |
        ;
Syntax2  : decl        {CorrectSyntax++;}
         | assign      {CorrectSyntax++;}
         | numbarr     {CorrectSyntax++;}
         | scan_func   {CorrectSyntax++;}
         | print_func  {CorrectSyntax++;}
         | len_func    {CorrectSyntax++;}
         | cmp_func    {CorrectSyntax++;}
         | func_call   {CorrectSyntax++;}
         | expr_func   {CorrectSyntax++;}
         | compare     {CorrectSyntax++;}
         | mergarr     {CorrectSyntax++;}
         | if_func     {CorrectSyntax++;}
         | while_loop  {CorrectSyntax++;}
         | for_loop    {CorrectSyntax++;}
         | ENDOFFILE   {TheEnd();} 
         | COMMENT

/* Possible errors fought by yyerrok; */
Faults  : error 
        | error DELIMITER       { yyerrok; }
        | error NEWLINE         { yyerrok; }
        | TOKEN_ERROR           { yyerrok; }
        | TOKEN_ERROR DELIMITER { yyerrok; }
        | TOKEN_ERROR NEWLINE   { yyerrok; }
        ;
/* ----------------------------------------------------- */

/* Declarations */
decl : type aid DELIMITER              { printf("\n\t### Line: %d - Declaration\n", line); }
     | type aid ASSIGNOP tim DELIMITER { printf("\n\t### Line: %d - Declaration and Assignment\n", line); }
/* ----------------------------------------------------- */

/* Arrays */
aid	: VARIABLE { $$ = strdup(yytext); }
int1    : INTEGER  { $$ = strdup(yytext); }
float1  : FLOAT	   { $$ = strdup(yytext); }
string1 : STRING   { $$ = strdup(yytext); }
aid1    : VARIABLE { $$ = "VARIABLE"; }

int_list    : int1 { $$ = strdup($1); }
	    | int_list COMMA int1 { $$ = strdup($1); }   
float_list  : float1 { $$ = strdup($1); }
	    | float_list COMMA float1 { $$ = strdup($1); }	
string_list : string1 { $$ = strdup($1); }
	    | string_list COMMA string1 { $$ = strdup($1); }
aid_list1   : aid1 { $$ = strdup($1); }
            | aid_list1 COMMA aid1 { $$ = strdup($1);}

numbarr : aid ASSIGNOP LB int_list RB DELIMITER    { printf("\n\t### Line: %d - Int array Assignment\n", line); }
	| aid ASSIGNOP LB float_list RB DELIMITER  { printf("\n\t### Line: %d - Float array Assignment\n", line); }
	| aid ASSIGNOP LB string_list RB DELIMITER { printf("\n\t### Line: %d - String array Assignment\n", line); }
	| aid ASSIGNOP LB aid_list1 RB DELIMITER   { LeftSide = 0; printf("\n\t### Line: %d - Variable array Assignment\n", line); }
/* ----------------------------------------------------- */

/* Scan Function */
scan_func : SCAN LP aid RP DELIMITER { printf("\n\t### Line: %d - Scan function\n", line); }
/* Warnings */
          | SCAN LP RP DELIMITER     { PrintWarningS("Scan Empty"); SyntaxWarnings++; }
/* ----------------------------------------------------- */

/* Len Function */
stringlen : STRING { $$ = strdup(yytext);  }
len_func  : len_func2 DELIMITER
len_func2 : LEN LP stringlen RP               { printf("\n\t### Line: %d - String Length\n", line); }
          | LEN LP aid RP                     { printf("\n\t### Line: %d - Variable Length\n", line); }
          | LEN LP LB int_list RB RP          { printf("\n\t### Line: %d - Int array Length\n", line); }
          | LEN LP LB float_list RB RP        { printf("\n\t### Line: %d - Float array Length\n", line); }
          | LEN LP LB string_list RB RP       { printf("\n\t### Line: %d - String array Length\n", line); }
/* Warnings */   
          | LEN LP RP                         { PrintWarningS("Empty Len"); SyntaxWarnings++;}
;
/* ----------------------------------------------------- */

/* Cmp Function */
cmp_func : cmp_func2 DELIMITER
cmp_func2 : CMP LP stringlen COMMA stringlen RP  { printf("\n\t### Line: %d - Strings comparison\n", line); }
          | CMP LP aid COMMA aid RP              { printf("\n\t### Line: %d - Variables comparison\n", line); }
/* Warnings */   
          | CMP LP RP                            { PrintWarningS("Empty Cmp"); SyntaxWarnings++;}
          | CMP LP stringlen RP                  { PrintWarningS("Invalid Number of Parameters for Cmp"); SyntaxWarnings++;}
          | CMP LP aid RP                        { PrintWarningS("Invalid Number of Parameters for Cmp"); SyntaxWarnings++;}
/* ----------------------------------------------------- */

/* Print Function */
print_func : PRINT LP stringlen RP DELIMITER                 { printf("\n\t### Line: %d - String print\n", line); }
	   | PRINT LP aid RP DELIMITER                       { printf("\n\t### Line: %d - Variable print\n", line); }
           | PRINT LP stringlen COMMA aid_list1 RP DELIMITER { printf("\n\t### Line: %d - String with variable print\n", line); }
           | PRINT LP len_func2 RP DELIMITER                 { printf("\n\t### Line: %d - Len print\n", line); }
           | PRINT LP cmp_func2 RP DELIMITER                 { printf("\n\t### Line: %d - Cmp print\n", line); }
           | PRINT LP tim_list2 COMMA stringlen COMMA tim_list2 RP DELIMITER { printf("\n\t### Line: %d - Variable, String and Value print\n", line); }
/* Warnings */ 
           | PRINT LP RP DELIMITER                           { PrintWarningS("Empty Print"); SyntaxWarnings++;}
;
/* ----------------------------------------------------- */

/* Func Function and call */
func_name    : VARIABLE { $$ = strdup(yytext); }
func_list    : type aid { $$ = strdup($1); }
	     | func_list COMMA type aid { $$ = strdup($1); }
func_content : program2
func_func    : FUNC func_name LP func_list RP LSB func_content RSB { printf("\n\t### Line: %d - Function\n", line); }
             | FUNC func_name LP RP LSB func_content RSB           { printf("\n\t### Line: %d - Function\n", line); }

tim_list : tim { $$ = strdup($1); }
         | tim_list COMMA tim { $$ = strdup($1); }
func_call : aid LP tim_list RP DELIMITER { printf("\n\t### Line: %d - Function call\n", line); }
          | aid LP RP DELIMITER          { printf("\n\t### Line: %d - Function call\n", line); }
/* ----------------------------------------------------- */

/* Expressions */
expr    : PLUS INTEGER
        | PLUS FLOAT
        | PLUS VARIABLE
        | MINUS INTEGER
        | MINUS FLOAT
        | MINUS VARIABLE
        | expr PLUS expr
        | expr MINUS expr
        | expr TIMES expr
        | expr DIVIDE expr 
        | val PLUS val
        | val MINUS val
        | val TIMES val
        | val DIVIDE val 
expr_func : expr DELIMITER { printf("\n\t### Line: %d - Expression\n", line); }
/* ----------------------------------------------------- */

/* Assignments */
type	: SINT     { $$ = strdup(yytext); }
        | SDOUBLE  { $$ = strdup(yytext); }
        | SLONG    { $$ = strdup(yytext); }
        | SSHORT   { $$ = strdup(yytext); }
	| SFLOAT   { $$ = strdup(yytext); }
        | SSTRING  { $$ = strdup(yytext); }

val     : INTEGER  { $$ = "SINT"; }
	| FLOAT	   { $$ = "SFLOAT"; }
	| VARIABLE { $$ = strdup(yytext); }

tim	: INTEGER  { $$ = "SINT"; }
	| FLOAT	   { $$ = "SFLOAT"; }
	| STRING   { $$ = "SSTRING"; }
	| VARIABLE { $$ = strdup(yytext); }

tim2	: INTEGER           { $$ = "SINT"; }
	| FLOAT	            { $$ = "SFLOAT"; }
	| STRING            { $$ = "SSTRING"; }
	| VARIABLE          { $$ = strdup(yytext); }
        | LB int_list RB    { $$ = strdup(yytext); }
        | LB float_list RB  { $$ = strdup(yytext); }
        | LB string_list RB { $$ = strdup(yytext); }
        | LB aid_list1 RB   { $$ = strdup(yytext); }

tim_list2 : tim2 { $$ = strdup($1); }
         | tim_list2 COMMA tim2 { 
                RightSide++;
                $$ = strdup($1);
         }

aid_list2 : aid1 { $$ = strdup($1); }
          | aid_list2 COMMA aid1 { 
                LeftSide++;
                $$ = strdup($1);
          }

assign	: aid ASSIGNOP tim DELIMITER {
		if (!strcmp($3, "SINT"))         { printf("\n\t### Line: %d - Int value assignment\n", line); }
                else if (!strcmp($3, "SFLOAT"))  { printf("\n\t### Line: %d - Float value assignment\n", line); }
                else if (!strcmp($3, "SSTRING")) { printf("\n\t### Line: %d - String value assignment\n", line); }
		else                             { printf("\n\t### Line: %d - Variable assignment\n", line); }
	}
        | aid ASSIGNOP expr DELIMITER { printf("\n\t### Line: %d - Expression assignment\n", line); }
        | aid PLUSPLUS DELIMITER      { printf("\n\t### Line: %d - Counter assignment\n", line); }
        | aid_list2 ASSIGNOP tim_list2 DELIMITER { 
                yyerrok;
                printf("\n\t### Line: %d - MultiExpression assignment\n", line);
                if ( LeftSide != RightSide ) {
                        SyntaxErrorCount++;
                        printf("\nError: syntax error");
                }
                LeftSide = 0; RightSide = 0;
        }
/* ----------------------------------------------------- */

/* Comparison */
cmp_list : cmp_list LESSTHAN cmp_list
         | cmp_list GREATERTHAN cmp_list
         | cmp_list LESSTHANOREQUAL cmp_list
         | cmp_list GREATERTHANOREQUAL cmp_list
         | cmp_list NOTEQUAL cmp_list
         | cmp_list EQUALTO cmp_list
         | expr LESSTHAN expr
         | expr GREATERTHAN expr
         | expr LESSTHANOREQUAL expr
         | expr GREATERTHANOREQUAL expr
         | expr NOTEQUAL expr
         | expr EQUALTO expr
         | val
;
compare: cmp_list DELIMITER { printf("\n\t### Line: %d - Comparison\n", line); }
/* ----------------------------------------------------- */

/* Array Merge */
mergarr : LB int_list RB PLUS LB int_list RB DELIMITER       { printf("\n\t### Line: %d - Int array merge\n", line); }
        | LB float_list RB PLUS LB float_list RB DELIMITER   { printf("\n\t### Line: %d - Float array merge\n", line); }
        | LB string_list RB PLUS LB string_list RB DELIMITER { printf("\n\t### Line: %d - String array merge\n", line); }
        | LB aid_list1 RB PLUS LB aid_list1 RB DELIMITER     { printf("\n\t### Line: %d - Variable array merge\n", line); }
/* ----------------------------------------------------- */

/* if Statement */
if_content : program2 { content_counter++; }
if_func : IF LP cmp_list RP LSB if_content RSB { printf("\n\t### Line: %d - If function\n", line); }
        | IF LP cmp_list RP if_content
        {
                printf("\n\t### Line: %d - If function\n", line);
                if ( content_counter > 1 ) {
                        printf("\nError: syntax error");
                        return 0;
                }
                content_counter = 0;
        }
/* Warnings */
        | IF LP RP LSB if_content RSB { PrintWarningS("If Empty"); SyntaxWarnings++;}
/* ----------------------------------------------------- */

/* while loop */
while_content : program2
while_loop : WHILE LP cmp_list RP LSB while_content RSB { printf("\n\t### Line: %d - While loop\n", line); }
/* Warnings */
        | WHILE LP RP while_content LSB RSB { PrintWarningS("While Empty"); SyntaxWarnings++;}
/* ----------------------------------------------------- */

/* for loop */
for_assign : aid ASSIGNOP expr { printf("\n\t### Line: %d - For loop expression assignment\n", line); }
        | aid PLUSPLUS         { printf("\n\t### Line: %d - For loop expression assignment\n", line); }
        ;
for_content : program2
for_loop : FOR LP assign compare assign RP LSB for_content RSB     { printf("\n\t### Line: %d - For loop\n", line); }
         | FOR LP assign compare for_assign RP LSB for_content RSB { printf("\n\t### Line: %d - For loop\n", line); }
/* Warnings */
        | FOR LP RP LSB for_content RSB                { PrintWarningS("For Empty"); SyntaxWarnings++;}
        | FOR LP assign RP LSB for_content RSB         { PrintWarningS("For Syntax"); SyntaxWarnings++;}
        | FOR LP assign compare RP LSB for_content RSB { PrintWarningS("For Syntax"); SyntaxWarnings++;}    
%%
/* End Of Syntax Rules */
/* ====================================================================== */

/* Main C code */
/* ====================================================================== */
/* Main function for opening Files and parsing */
/* Using yyparse() to start the Syntax analyzer */
int main(int argc,char **argv){
	int i;
	if(argc == 2)
		yyin=fopen(argv[1],"r");
	else
		yyin=stdin;
	yyparse();
	return 0;
}

/* Syntax warning printing function */
void PrintWarningS (char* s){
    printf("\tWarning line %d, %s\n",line, s);
    return;
}

/* Ending Funtion */
/* Stopping the program properly when the end of file has been reached or */
/* stoping the program immediately once encoutering a fatal error */
void TheEnd(){
        printf("==========================================\n");
        printf("CORRECT WORDS: %d\t\t\t\t\t\t||\n", CorrectWords);
        printf("CORRECT SYNTAX: %d\t\t\t\t\t\t||\n", CorrectSyntax);
        printf("WORD ERRORS: %d\t\t\t\t\t\t\t||\n", WordErrors); 
        printf("SYNTAX ERRORS: %d\t\t\t\t\t\t||\n", SyntaxErrorCount);  
        printf("----------------------------------------||\n");
        printf("WORD WARNINGS: %d\t\t\t\t\t\t||\n", WordWarnings); 
        printf("SYNTAX WARNINGS: %d\t\t\t\t\t\t||\n", SyntaxWarnings); 
        printf("==========================================\n");
        if (WordErrors==0 && SyntaxErrorCount==0 && FatalError==0){
                printf("PARSING SUCCEEDED.\n");
        } else {
                printf("PARSING FAILED.\n");
        }
        exit(0);
} 

/* Error printing Function */
/* Modifying yyerror */
void yyerror(char *s) {
        printf("Error: %s\n", s);
        SyntaxErrorCount++;
}

/* End of C Main Code */
/* ====================================================================== */