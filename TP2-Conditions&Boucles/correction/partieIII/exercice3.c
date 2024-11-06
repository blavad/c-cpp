#include <stdio.h>

void squareForN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d^2 = %d\n", i, i * i);
    }
}

void squareWhileN(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d^2 = %d\n", i, i * i);
        i = i + 1;
    }
}

void squareDoWhileN(int n)
{
    if (n > 0)
    {
        int i = 0;
        do
        {
            i = i + 1;
            printf("%d^2 = %d\n", i, i * i);
        } while (i <= n - 1);
    }
}

int main()
{
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    squareDoWhileN(n);

    return 0;
}