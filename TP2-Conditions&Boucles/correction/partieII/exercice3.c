#include "stdio.h"

int main()
{
    int a, b, c;
    printf("Entrez 3 entiers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Le plus grand entier est : ");

    if (a >= b && a >= c)
    {
        printf("%d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }
    return 0;
}