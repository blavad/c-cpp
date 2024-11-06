#include "stdio.h"

int main()
{
    int n, i, max;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("Entier n°1 : ");
    scanf("%d", &max);

    int tmp;

    for (i = 2; i <= n; i++)
    {
        printf("Entier n°%d : ", i);
        scanf("%d", &tmp);
        if (tmp > max)
        {
            max = tmp;
        }
    }

    printf("Le plus grand entier est : %d\n", max);

    return 0;
}