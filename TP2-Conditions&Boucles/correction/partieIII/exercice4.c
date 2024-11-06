#include <stdio.h>

int main()
{
    int a, b;
    printf("Entrez deux entiers :");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    for (int entier = a; entier <= b; entier++)
    {
        if (entier % 2 == 1)
        {
            printf("%d\t", entier);
        }
    }

    return 0;
}