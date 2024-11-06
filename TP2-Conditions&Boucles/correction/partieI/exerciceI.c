#include "stdio.h"

int main()
{
    int nombre;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
    printf("2 x %d = %d\n", nombre, 2 * nombre);
    return 0;
}