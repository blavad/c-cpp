#include <iostream>
#include "calcul.hpp"

using namespace std;

int main() {
    int s = addition(10, 20);
    s = carre(s);
    s = moyenne(s, 41, carre(3));
    cout << s << endl;
    return 0;
}