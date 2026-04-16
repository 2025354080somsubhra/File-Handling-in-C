#include<stdio.h>

int main() {
    FILE *fptr = NULL;
    int c;
    fptr = fopen("som.txt","r");
    c = fgetc(fptr);

    while(c != EOF) {
        putchar(c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
