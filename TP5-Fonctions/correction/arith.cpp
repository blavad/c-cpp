#include <cmath>
#include <stdexcept>
#include "arith.hpp"

// Définition des fonctions

bool estPremier(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Algorithme d'Euclide
int pgcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::map<int, int> decompoFacteursPremiers(int n)
{
    std::map<int, int> facteurs;
    int fact = 2;

    if (n <= 1)
    {
        throw std::invalid_argument("Le nombre doit être supérieur à 1");
    }

    while (n != 1)
    {
        while (n % fact == 0)
        {
            facteurs[fact]++;
            n = n / fact;
        }
        fact++;
    }

    return facteurs;
}