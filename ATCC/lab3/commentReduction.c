#include <stdio.h>

void main() {
    FILE *fp1, *fp2;
    char filename1[] = "file1.txt";
    char filename2[] = "file2.txt";
    int ch, next;

    fp1 = fopen(filename1, "r");
    fp2 = fopen(filename2, "a");

    if (!fp1 || !fp2) {
        printf("Error opening files.\n");
    }

    while ((ch = fgetc(fp1)) != EOF) {

        if (ch == '/') {
            next = fgetc(fp1);

            if (next == '/') {
                while ((ch = fgetc(fp1)) != '\n'){
                    continue;
                }

                fputc('\n' , fp2);
            }


            else if (next == '*') {
                while (1) {
                    ch = fgetc(fp1);

                    if (ch == '*') {
                        next = fgetc(fp1);
                        if (next == '/') {
                            break;
                        }
                    }
                }
                continue;
            }

            else {
                fputc('/', fp2);
                ungetc(next, fp1);
                continue;
            }
        }

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

}
