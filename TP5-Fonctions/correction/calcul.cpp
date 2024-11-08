#include "calcul.hpp"

int somme(int a, int b)
{
    return a + b;
}

int carre(int a)
{
    return a * a;
}

float moyenne(float a, float b, float c)
{
    return (a + b + c) / 3;
}

bool estPair(int n)
{
    return (n % 2 == 0);
}

int sommeNombresPairs(const std::vector<int> &vecteur)
{
    int somme = 0;
    for (int nombre : vecteur)
    {
        if (estPair(nombre))
        {
            somme += nombre;
        }
    }

    return somme;
}