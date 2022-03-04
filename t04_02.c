// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int _argv, char **_argc)
{
     
    char kata[50];
    scanf("%s", &kata);
    int x;
    scanf("%d", &x);
    int leng = strlen(kata);
    int number[leng];
    char num[0];

    for (int i = 0; i < leng; i++)  {
         number[i] = (int) kata[i];
         x = x % 255;
         number[i] += x;

    }
    for (int i = 0; i < leng; i++)
    {
        if (number[i] < 100){
            sprintf(num, "%d", number[i]);
            printf("0%s", num);
        }   else    {
            printf("%d", number[i]);
        }
    }

    for (int i = 0; i < leng; i++)
    {
        kata[i] = (char)number[i];
    }

    printf("\n");
    for ( int i = 0; i < leng; i++)
    {
        printf("%c", kata[i]);
    }

  return 0;
 
}



