%option noyywrap
 
%{
int c=0 , v=0;
%}

%%

[AEIOUaeiou] v++;
[a-zA-z] c++;
\n {printf("No. of vowels %d \nNo. of Consonents: %d\n" , v ,c) ; v=0 ; c=0;}
. {}

%%

void main(){
	yylex();
}