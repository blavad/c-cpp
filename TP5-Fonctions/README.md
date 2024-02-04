# TP n°5 : Fonctions

Dans ce TP, on s'intéresse aux fonctions en C/C++. Les compétences travaillées durant cette activité sont les suivantes :

- déclarer une fonction
- utiliser une fonction déclarée dans un autre fichier
- compiler des fichiers sources séparés

## Partie I : Calcul

### Préparation

Créer 3 fichiers distincts :

- `calcul.hpp` : ce fichier contiendra la déclaration des fonctions
- `calcul.cpp` : ce fichier contiendra l'implémentation des fonctions
- `partieI.cpp` : ce fichier est le fichier principal. Il importera les fonctions afin de les utiliser sur les valeurs de votre choix.

### Exercice

Pour chacune des fonctions ci-dessous, déclarez la fonction dans le fichier `calcul.hpp`, implémentez-la dans le fichier `calcul.cpp` et testez la dans le fichier `partieI.cpp`.

1. Écrire une fonction appelée `addition` qui prend deux entiers en paramètres et renvoie leur somme.
2. Créer une fonction nommée `carre` qui prend un entier en paramètre et renvoie le carré de cet entier.
3. Définir une fonction `moyenne` qui prend trois nombres à virgule flottante en paramètres et retourne leur moyenne.
4. Écrire une fonction `estPair` qui prend un entier en paramètre et renvoie true si l'entier est pair, sinon renvoie false.
5. Créer une fonction `sommeNombresPairs` qui prend un vecteur d'entiers en paramètre et renvoie la somme de tous les nombres pairs contenu dans ce vecteur. On fera en sorte d'utiliser la fonction `estPair` définit précédemment.

## Partie II : Arithmétique

### Préparation

Créer 3 fichiers distincts :

- `arith.hpp` : ce fichier contiendra la déclaration des fonctions
- `arith.cpp` : ce fichier contiendra l'implémentation des fonctions
- `partieII.cpp` : ce fichier est le fichier principal. Il importera les fonctions afin de les utiliser sur les valeurs de votre choix.

### Exercice

Pour chacune des fonctions ci-dessous, déclarez la fonction dans le fichier `arith.hpp`, implémentez-la dans le fichier `arith.cpp` et testez la dans le fichier `partieII.cpp`.

1. Définir une fonction `estPremier` qui prend un entier en paramètre et renvoie true s'il est premier, sinon renvoie false.

   **_Rappel :_** 0 et 1 ne sont pas premiers

2. Définir une fonction `pgcd` qui prend deux entiers en paramètres et renvoie le PGCD de ces deux nombres grâce à l'algorithme d'Euclide.

3. Définir une fonction `decompoFacteursPremiers` qui prend un entier en paramètre et renvoie une map dont les clés sont les facteurs premiers et les valeurs sont les puissances associées à ces facteurs.

## Partie II : Chaînes de caractères

### Préparation

Créer 3 fichiers distincts :

- `chaine.hpp` : ce fichier contiendra la déclaration des fonctions
- `chaine.cpp` : ce fichier contiendra l'implémentation des fonctions
- `partieIII.cpp` : ce fichier est le fichier principal. Il importera les fonctions afin de les utiliser sur les valeurs de votre choix.

### Exercice

Pour chacune des fonctions ci-dessous, déclarez la fonction dans le fichier `chaine.hpp`, implémentez-la dans le fichier `chaine.cpp` et testez la dans le fichier `partieIII.cpp`.

1.  Écrire une fonction `occurrences` qui prend une chaîne de caractères et un caractère en paramètres, puis renvoie le nombre d'occurrences de ce caractère dans la chaîne.

2.  Écrire une fonction `inverseChaine` qui prend une chaîne de caractères en paramètre et renvoie cette chaîne inversée.
3.  Définissez une fonction `compterVoyelles` qui prend une chaîne de caractères en paramètre et renvoie le nombre de voyelles présentes dans la chaîne.
4.  Écrire une fonction `intersectionTableaux` qui prend deux tableaux d'entiers en paramètres et renvoie un nouveau tableau contenant les éléments communs aux deux tableaux.
