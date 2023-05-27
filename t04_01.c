#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    return 0;
}
