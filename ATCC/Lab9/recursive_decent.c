#include<stdio.h>
char input[100];
int i = 0;

void E();
void E_dash();
void T();
void T_dash();
void F();

void E(){
	T();
	E_dash();
}

void T_dash(){
	  if (input[i] == '*') {
        i++;
        F();
        T_dash();
    }
}

void E_dash(){
	if (input[i] == '+') {
        i++;
        T();
        E_dash();
    }
}

void T(){
	F();
	T_dash();
}

void F(){
	  if (input[i] == 'i' && input[i + 1] == 'd') {
        i += 2;
    } else {
        printf("Invalid expression");
    }
}



void main() {
    printf("Enter expression: ");
    scanf("%s", input);

    E();

    if (input[i] == '\0') {
        printf("Valid expression");
    } else {
        printf("Invalid expression");
    }

}

