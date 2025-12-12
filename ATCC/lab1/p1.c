#include<stdio.h>
void main(){

    FILE *fp;
    char filename[] = "Doc1.txt";
    char ch;

    int chars = 0 , spaces = 0 , newline = 0 , tabs = 0;

    fp = fopen(filename , "r");
    ch = fgetc(fp);
    while(ch != EOF){
        if(ch == ' '){
            spaces++;
        }
        else if(ch == '\n'){
            newline++;
        }
        else if(ch == '\t'){
            tabs++;
        }
        else{
            chars++;
        }
        
        ch = fgetc(fp);
    }

    fclose(fp);
    printf("No. of characters : %d ",chars);
    printf("No. of spaces : %d ",spaces);
    printf("No. of new lines : %d ",newline);
    printf("No. of tabs : %d ",tabs);

}
