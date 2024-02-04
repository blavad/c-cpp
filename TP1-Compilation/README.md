# TP n°1 : Compilation et préprocesseur en C

Dans ce TP, on s'intéresse à la compilation et aux instructions du préprocesseur en C. Les compétences travaillées durant cette activité sont les suivantes :

- Comprendre la chaîne de compilation en C
- Utiliser le compilateur `gcc`
- Connaître et utiliser les instructions du préprocesseur

## Partie 0 : Mise en place

- Cloner ce repo : `git clone https://github.com/blavad/c-cpp.git`
- Ouvrer un terminal à l'emplacement `c-cpp/TP1-Compiler`

Ce dossier est le votre pendant tout les TPs. Toutes les manipulations doivent être faites à l'intérieur. Il contient déjà certains fichiers qui seront à lire et/ou compléter durant le TP.

## Partie I : Les instructions du préprocesseur

Une particularité propre du compilateur `gcc` est qu'il n'opère pas directement sur le code source fournit par le programmeur. Une phase spéciale de réécriture du programme précède toute compilation. L'utilitaire se chargeant de cette phase de pré-traitement se nomme le préprocesseur.

### Macrogénération de code

Le langage C possède un moyen de réaliser de la macrogénération de code. Cette macrogénération ne peut s'effectuer que durant la phase du préprocesseur. Il apparaît donc que ce mécanisme ne fait pas partie intégrante du langage.

Toutes les instructions du préprocesseur commencent par un #.

### Instruction `#define`

L'instruction `#define` du préprocesseur permet de définir une macro constante ou macro paramétrée.

    Attention ! En C il y a une différence entre minuscules et majuscules.

**_Exemple :_**
Soit la déclaration de macros ci-dessous.

```c
#define Non 0
#define Oui 1
#define max(a, b) (a>=b?a:b)
#define min(a, b) (a<=b?a:b)
```

Par quoi sera remplacé les instructions suivantes lors de la phase de pré-processing ?

```c
if (var1==Non) return max(var1, var2)
else return min(var1, var2)
```

**_Remarque :_** la définition de macros est récursive `max(min(a,b),c)` produira
`((a<=b?a:b)>=c?(a<=b?a:b):c)`

### Instruction `#undef`

Cette instruction permet d'annuler une définition de macro.

**_Exemple :_**
Avant préprocesseur :

```c
#define a 10
a + b;
#undef a
a + c;
```

Après préprocesseur ?

```c



```

### Les macros prédéfinies

Un certain nombre de macros sont prédéfinies.

| Nom des macros |                                                Usage                                                |
| :------------: | :-------------------------------------------------------------------------------------------------: |
|   `__FILE__`   |              Cette macro sera remplacée par le nom du fichier en cours de traitement.               |
|   `__DATE__`   | Cette macro sera remplacée par une chaîne de caractères contenant la date de traitement du fichier. |
|   `__TIME__`   |      Cette macro sera remplacée par une chaîne représentant l'heure de traitement du fichier.       |

### Instruction `#include`

L'instruction `#include` permet d'inclure un fichier dans celui en cours de traitement.
Cette instruction prend en unique paramètre le nom du fichier à inclure. Cette inclusion est ponctuelle : la totalité du fichier à inclure se retrouve donc entre la ligne précédent l'instruction d'inclusion et la suivante. Le compilateur, lui, n'aura plus qu'à traiter un gros fichier résultant de la fusion des deux fichiers initiaux.

**_Exemple :_** Soit les fichiers `file.c` et `main.c` avec le code suivant :

```c
// Dans file.c
int add(int a, int b) {
    return a+b;
}
```

```c
// Dans main.c
#include "file.c"

void main() {
    int sum = add(10, 20);
}
```

Par quoi seront remplacés les instructions du fichier `main.c` après la phase de pré-processing ?

### Compilation conditionnelle

Afin d'introduire une portion de code selon un critère particulier, il faut utiliser une des trois instructions commençant par if (`#if`, `#ifdef`, `#ifndef`). La fin d'une tel instruction est marquée par `#endif`.

**_Exemple :_**
Que donne après pré-processing le code suivant ?

```c
printf("Ligne 1\n");
#ifdef Toto
printf("Ligne 2\n");
#else
printf("Ligne 3\n");
#endif
printf("Ligne 4\n");
```

### Exercices

1. Définir les macros suivantes :
   - valeur absolue d'une expression
   - minimum de deux expressions
   - minimum de trois expressions
   - minimum en valeur absolue de deux expressions (en utilisant valeur absolue d’une expression et en ne l’utilisant pas)

## Partie II : Compilation

Dans cette partie nous allons compiler notre premier programme C.

1. Créer deux fichiers nommés `main.c` et `file.c`.
2. Copier le contenue de l'exemple _"Instruction #include"_ ci-dessus.
3. Exécuter la phase de préprocessing et vérifier que le résultat est celui attendu.
4. Générer le code assembleur avec l'option `-S`.
5. Finalement, exécuter la chaîne de compilation complète dans le but de créer un fichier exécutable nommé `TP1`.
