#include<stdio.h>

void main() {
    FILE *f1;
    long pos;
    char ch;
    f1 = fopen("seek.txt","r");

    fputs("Hello India",f1);
    pos = ftell(f1);
    printf("The position is : %ld\n",pos);
    fseek(f1,19,SEEK_SET);
    ch = fgetc(f1);
    printf("The First Character is : %c\n",ch);
    printf("%d",ftell(f1));
    fclose(f1);
}