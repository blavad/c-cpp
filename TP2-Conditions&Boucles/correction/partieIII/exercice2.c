#include <stdio.h>

int main()
{
    for (int ligne = 1; ligne <= 10; ligne++)
    {
        for (int colonne = 1; colonne <= 10; colonne++)
        {
            printf("%4d ", ligne * colonne);
        }
        printf("\n");
    }

    return 0;
}