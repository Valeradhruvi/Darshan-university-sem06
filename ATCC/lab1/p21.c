#include<stdio.h>
void main(){
    FILE *fp1 , *fp2;
    char file1[] = "Doc1.txt";
    char file2[] = "Doc2.txt";

    char ch[100];  

    fp1 = fopen(file1 , "a");
    fp2 = fopen(file2 , "r");

    while((fscanf(fp2 , "%s" , &ch)) != EOF){
       
        fprintf(fp1 , "%s" , ch);
    }

    fclose(fp1);
    fclose(fp2);
}