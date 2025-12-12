#include<stdio.h>
void main(){
    FILE *fp;
    char filename[] = "Doc1.txt";
    char ch[100];  
    char output[1000] = ""; 

    fp = fopen(filename , "r");
    while((fscanf(fp , "%s" , &ch)) != EOF){
        ch[0] = toupper(ch[0]);
        printf("%s " , ch);
        strcat(output , ch);
        strcat(output , " ");
    }

    fclose(fp);

    fp = fopen(filename, "w");
    fputs(output, fp);

    fclose(fp);
}