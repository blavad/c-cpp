#include "arith.hpp"
#include <iostream>

using namespace std;

int main()
{
    if (estPremier(3))
        cout << "3 est premier" << endl;
    else
        cout << "3 n'est pas premier" << endl;

    if (estPremier(501))
        cout << "501 est premier" << endl;
    else
        cout << "501 n'est pas premier" << endl;

    cout << "Le plus grand diviseur commun de 2550 et 284 est " << pgcd(2550, 284) << endl;

    map<int, int> facteurs = decompoFacteursPremiers(2550);
    for (auto const &facteur : facteurs)
    {
        cout << facteur.first << " : " << facteur.second << endl;
    }

    return 0;
}