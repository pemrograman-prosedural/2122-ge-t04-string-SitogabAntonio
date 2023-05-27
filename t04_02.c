#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fungsi untuk melakukan konversi yang kedua dari nilai ASCII ke teks
void convertToText(int len, int number[]) {
    char text[len];
    for (int i = 0; i < len; i++) {
        text[i] = (char)number[i];
    }
    printf("\n%s", text);
}

int main(int argc, char **argv) {
    char kata[1000];
    int x;

    scanf("%s", kata);
    scanf("%d", &x);

    int len = strlen(kata);

    int number[len];

    for (int i = 0; i < len; i++) {
        number[i] = (int)kata[i];
        number[i] = (number[i] + x) % 256;
    }

    for (int i = 0; i < len; i++) {
        printf("%03d", number[i]);
    }

    convertToText(len, number);

    return 0;
}
