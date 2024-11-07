# TP Maison : Le labyrinthe

On souhaite réaliser un jeu de labyrinthe.

Dans ce jeu, le joueur apparaît à une position initiale (notée _I_) du labyrinthe et doit trouver la sortie (notée _S_). Pour se faire, il utilisera les touches _E_, _S_, _D_ et _F_ pour aller respectivement vers le haut, la gauche, le bas et la droite.

### Les labyrinthes

On considère que les labyrinthes sont stockés dans des fichiers (voir l'exemple `labyrinthe.txt`) et suivent le format:

- _I_ : position initiale du joueur
- _S_ : sortie du labyrinthe
- _#_ : un mur
- _P_ : un passage autorisé

### Portée

La difficulté réside dans le fait que le joueur ne voit qu'à une portée _PORTEE_ de sa position. Par exemple si la portée est égale à 3, alors le joueur ne verra qu'un carré 7x7 centré sur sa position (soit 3 cases à droite, 3 à gauche, 3 au dessus et 3 en dessous de sa position).

### Récupération des entrées du joueur

Pour récupérer les entrées du joueur, vous pouvez utiliser la fonction `scanf` pour récupérer un caractère.

Toutefois, cette méthode n'est pas idéale car elle oblige le joueur à utiliser la touche `Entrée` pour valider sa saisie.

Pour éviter ce caractère bloquant de la fonction `scanf`, vous pouvez utiliser les méthodes `activateNonBlockingMode`, `getNonBlockingInput` et `restoreBlockingMode` contenues dans `binput.h`.

**Exemple d'utilisation**

```c
#include <stdio.h>
#include <unistd.h> // pour la fonction usleep
#include "binput.h"

int main()
{
    char input;
    activateNonBlockingMode();

    printf("Appuyez sur une touche pour continuer (q pour quitter) :\n");

    while (1)
    {
        if (getNonBlockingInput(&input) > 0)
        { // Récupérer l'input si disponible
            printf("Touche pressée : %c\n", input);

            if (input == 'q')
            { // Quitter si l'utilisateur appuie sur 'q'
                printf("Quitter le programme...\n");
                break;
            }
        }

        // Simulation d'autres tâches en cours
        printf("Le programme est en cours d'exécution...\n");
        usleep(50000); // Pause de 500 ms
    }

    restoreBlockingMode();
    return 0;
}
```

> ⚠️ **Important**: l'exemple si dessus est important, il pourra vous servir de base pour créer votre boucle de jeu.

### Affichage du jeu

L'affichage du labyrinthe (avec portée) se fait dans le terminal. Vous pouvez représenter le labyrinthe de la façon que vous le souhaitez. Si vous n'avez pas d'idée, voici ci-dessous un exemple de d'affichage possible.

```
Le joueur est représenté par la lettre **o**; la sortie par **S**. Dans cet exemple, la portée est 2 et le joueur est allé 3 fois à droite.

-------         -------         -------         -------
|#    |         |     |         |     |         |     |
|#####|         |#####|         |#####|         |#####|
| #o  |         |# o  |         |  o  |         |  o #|
| # ##|         |# ###|         | ### |         |### #|
| # #S|         |# #S |         | #S  |         |#S  #|
-------         -------         -------         -------

```

### Quelques exemples de fonctions

On pourra lors de ce travail définir des fonctions et procédures telles que :

- `loadMaze`: qui lit un fichier de labyrinthe et le stocke dans un tableau à 2 dimensions
- `afficheMaze` : qui affiche un morceau de labyrinthe dans le terminal (selon la position du joueur et la portée)
- `updatePosition` : qui met à jour la position du joueur
- `checkPosition` : vérifie qu'une position est valide
- ... etc

**Attention :** ces méthodes sont à titre indicatif et ne constituent pas une liste exhaustive des fonctions du jeu, ni une obligation de nommage.

### Lancement du jeu

Pour lancer le jeu, on doit pouvoir renseigner en arguments de l'exécutable le fichier de labyrinthe et la portée. Toutefois, on laisse à l'utilisateur la possible de ne rien mettre et dans ce cas, des valeurs par défaut seront assignés au jeu.

_Exemples d'exécutions valides_ :

```bash
./labyrinthe
./labyrinthe labyrinthe.txt
./labyrinthe monLabyrinthe2.txt 4
```

## Notation et rendu

La notation portera uniquement sur le code et l'exécution du projet.

Faites attention notamment aux points suivants:

- code lisible (indentation, conventions de nommage, noms des variables et functions, etc)
- bon découpage du code en fonctions et fichiers
- pas de fichier avec plus de 200 lignes
- le code est commenté quand cela est nécessaire

> ⚠️ **Veuillez impérativement écrire en commentaire dans le fichier principal (main) la ou les lignes nécessaires pour compiler votre projet**

Concernant le rendu :

> ⚠️ **Le rendu doit se faire sur classroom sous forme d'un seul et unique dossier compressé (.zip ou .tar)**
