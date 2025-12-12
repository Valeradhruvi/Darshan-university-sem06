#include<stdio.h>
void main(){
    FILE *fp1 , *fp2;
    char ch;

    char file1[] = "Doc1.txt";
    char file2[] = "Doc2.txt";

    fp1 = fopen(file1 , "a");
    fp2 = fopen(file2 , "r");

    while((ch = fgetc(fp2)) != EOF){
        fputc(ch , fp1);
    }
    fclose(fp1);
    fclose(fp2);
}