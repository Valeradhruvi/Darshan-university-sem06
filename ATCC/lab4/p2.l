%option noyywrap
 
%{
int c=0 , w=0 , l=0;
%}

%%
 
[a-zA-Z0-9]* {w++ ; c+=yyleng;}
. c++;
\n {c++ ; l++;}

%%

void main(){
	yyin = fopen("flex_help.txt" , "r");
	yylex();
	printf("No. of characters: %d\nNo. of words: %d\nNo. of lines : %d\n" , c,w,l);
}