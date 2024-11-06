#include "stdio.h"

int main()
{
    int monNombre;
    int error = scanf("%d", &monNombre);

    if (error != 0)
    {
        if (monNombre > 0)
        {
            printf("+");
        }
        else if (monNombre == 0)
        {
            printf("0");
        }
        else
        {
            printf("-");
        }

        return 0;
    }
    else
    {
        printf("Erreur de saisie\n");
        return 1;
    }
}