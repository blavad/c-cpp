#include <stdio.h>
#define N 5

int *max(int a[N], int n) {
    int* maxPtr; // Déclaration du pointeur sur valeur max
    maxPtr = a; // Initialisation à l'adresse de la première case
    for (int i = 1; i < n; i++) {
        if (*maxPtr < *(a + i)) {
            maxPtr = a + i;
        }
    }
    return maxPtr;
}

int main() {
    int tab[N] = {10, 2, 5, 14, 7};
    int* addrMax = max(tab, N);
    printf("Le max est stocké à l'adresse %p et vaut %d\n", addrMax, *addrMax);
    printf("Position du max dans le tableau : %ld\n", addrMax - tab);
    return 0;
}