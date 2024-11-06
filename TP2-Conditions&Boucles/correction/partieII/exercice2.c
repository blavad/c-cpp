#include "stdio.h"

int main()
{
    char monChar;
    printf("Entrez un caractère :");
    scanf("%c", &monChar);

    if (monChar >= 'a' && monChar <= 'z')
    {
        monChar -= 32;
        printf("Le caractère en majuscule est : %c\n", monChar);
    }
    return 0;
}