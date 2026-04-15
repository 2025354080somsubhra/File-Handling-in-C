#include <stdio.h>

int main() {
    FILE *f1;
    int ch;
    int space = 0, word = 0, line = 0, chara = 0;
    int freq[26] = {0};

    f1 = fopen("stats.txt", "r");


    while ((ch = fgetc(f1)) != EOF) {
        chara++;

        if (ch == ' ')
            space++;

        if (ch == '\n')
            line++;

        if (ch >= 'A' && ch <= 'Z')
            freq[ch - 'A']++;

        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    word = space + line + 1;

    fclose(f1);

    printf("No. of Spaces : %d\n", space);
    printf("No. of Words  : %d\n", word);
    printf("No. of Lines  : %d\n", line);
    printf("No. of Characters : %d\n", chara);

    printf("Frequency of each alphabet:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c : %d\n", i + 'A', freq[i]);
    }

    return 0;
}