#include<stdio.h>

void main() {
    FILE *fp;
    int c;
    fp = fopen("som.txt","r");
    c = fgetc(fp);
    while(c != EOF) {
        putchar(c);
        c = fgetc(fp);
    }
    fclose(fp);
}