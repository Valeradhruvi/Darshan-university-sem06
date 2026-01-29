%option noyywrap
 
%{
#include<stdio.h>
int count=0;
%}

%%
 
\/\/.*\n {printf("%s\n" , yytext) ; count++;}
\/\*(.*\n)*.*\*\/ {printf("%s\n" , yytext) ; count++;}
.|\n {fprintf(yyout , "%s" , yytext); }

%%

void main(){
	yyin = fopen("input.c" , "r");
	yyout = fopen("temp.txt" , "w");
	yylex();
	printf("Number of comments are: %d" , count);
}	