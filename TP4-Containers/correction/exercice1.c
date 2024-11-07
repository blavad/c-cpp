#include <stdio.h>

float sum(float tab[], int size)
{
    float total = 0.;
    for (int i = 0; i < size; i++)
    {
        total = total + tab[i];
    }
    return total;
}

void invert(float tab[], int size)
{
    float tmp;
    for (int i = 0; i < size / 2; i++)
    {
        tmp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = tmp;
    }
}

int main()
{
    float tab[5] = {1.1, 2.2, 34.3, 4.4, 5.5};
    float total;

    total = sum(tab, 5);
    invert(tab, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("tab[%d] = %f\n", i, tab[i]);
    }

    printf("Total = %f\n", total);
    return 0;
}