#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define token[100]
#define input[100]
int i=0 , j=0;

void get_token(){
    token[j]='\0';
    printf("Token: %s\n",token);
    j=0;
}

void main(){
    FILE *fp;
    char filename[] = "file2.txt";

    fp = fopen(filename , "r");

    if(!fp){
        printf("Can't Open File");
    }

    while(fgets(input , 100 , fp) != EOF){
        i=0;
        j=0;

        while(input[i] != '\0'){
            if(isspace(input[i])){
                i++;
                continue;
            }

            else if(isalpha(input[i])){
                
            }
        }
    }
    
}













































// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #define MAX 100
// char input[MAX], token[MAX];
// int i = 0, j = 0;

// void get_token() {
//     token[j] = '\0';
//     printf("Token: %s\n", token);
//     j = 0;
// }

// int main() {
//     FILE *fp;
//     fp = fopen("file1.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     // Read and process each line so the program handles multiple lines
//     while (fgets(input, MAX, fp) != NULL) {
//         i = 0;
//         j = 0;
//         while (input[i] != '\0') {
//             if (isspace((unsigned char)input[i])) {
//                 i++;
//                 continue;
//             }
//             if (isalpha((unsigned char)input[i])) {
//                 while (isalnum((unsigned char)input[i])) {
//                     token[j++] = input[i++];
//                 }
//                 get_token();
//             } else if (isdigit((unsigned char)input[i])) {
//                 while (isdigit((unsigned char)input[i])) {
//                     token[j++] = input[i++];
//                 }
//                 get_token();
//             } else {
//                 token[j++] = input[i++];
//                 get_token();
//             }
//         }
//     }

//     fclose(fp);
//     return 0;
// }