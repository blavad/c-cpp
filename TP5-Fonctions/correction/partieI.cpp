#include "calcul.hpp"

int main()
{
    std::cout << "Somme de 3 et 5 : " << somme(3, 5) << std::endl;
    std::cout << "Carre de 4 : " << carre(4) << std::endl;
    std::cout << "Moyenne de 3, 5 et 7 : " << moyenne(3, 5, 7) << std::endl;
    std::cout << "Est-ce que 4 est pair ? " << estPair(4) << std::endl;
    std::vector<int> vecteur = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Somme des nombres pairs : " << sommeNombresPairs(vecteur) << std::endl;
    return 0;
}