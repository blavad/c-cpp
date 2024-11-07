#include <iostream>
const int MAXELEVES = 100;

using namespace std;


float moyenne(float* notes, int nbeleves) {
    float sum = 0;
    float moyenne;
    for (int i = 0; i < nbeleves; i++) {
        sum += notes[i];
    }
    moyenne = sum / nbeleves;
    return moyenne;
}


int main() {
    // Déclaration des variables
    int nbeleves;
    float notes[MAXELEVES] = {0};

    // Demande le nombre d'élèves
    cout << "Combien d'élèves dans la classe ?" << endl;
    cin >> nbeleves;

    // Demande les notes des élèves
    cout << "Entrez les notes des élèves" << endl;
    for (int i = 0; i < nbeleves; i++) {
        cout << "Note de l'élève "<< i + 1 << ":";
        cin >> notes[i];
    }

    // Calcul de la moyenne
    float moyenneNotes;
    moyenneNotes = moyenne(notes, nbeleves);
    cout << "La moyenne des élèves est : " << moyenneNotes << endl;

    // Notes sup à 10
    int nbNotesSup10 = 0;
    for (int i = 0; i < nbeleves; i++) {
        if (notes[i] >= 10) {
            nbNotesSup10++;
        } else {
            cout << i << endl;
        }
    }
    cout << nbNotesSup10 << " élèves ont eu la moyenne" << endl;

    bool note18found = false;
    int i = 0;
    while (!note18found && i < nbeleves) {
        if (notes[i] >= 18) {
            cout << "L'élève " << i << " a eu " << notes[i] << endl;
            note18found = true;
        }
        i++;
    } 

}