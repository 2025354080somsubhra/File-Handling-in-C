#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    int ch;

    f1 = fopen("hello.txt", "r");
    f2 = fopen("bye.txt", "w");

    if (f1 == NULL || f2 == NULL)
    {
        printf("File error!");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);

    printf("Data Copied Successfully");
    return 0;
}