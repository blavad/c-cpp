#include <iostream>

using namespace std;

int main() {
    int monNombre;
    cout << "Entrez un nombre entier : "; 
    cin >> monNombre;

    if (monNombre > 0) {
        cout << '+' << endl;
    } else if (monNombre == 0) {
        cout << '0' << endl;
    } else {
        cout << '-' << endl;
    }


    return 0;
}