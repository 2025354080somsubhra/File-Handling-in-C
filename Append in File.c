#include<stdio.h>

int main() {
    FILE *fptr;
    char string[100] = "I like to Play Football";

    fptr = fopen("som.txt","a");
    fprintf(fptr,"%s",string);
    return 0;
}
