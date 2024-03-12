#include <iostream>

int main() {
    char monChar;
    std::cout << "Entrez un caractère :";
    std::cin >> monChar;

    if (monChar >= 'a' && monChar <= 'z') {
        monChar = monChar - 32;
        std::cout << monChar << std::endl;
    }

    return 0;
}