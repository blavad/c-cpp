# TP n°4 : Tableaux / Conteneurs STL

Dans ce TP, on s'intéresse aux tableaux et aux conteneurs STL en C++. Les compétences travaillées durant cette activité sont les suivantes : 

- Manipuler des tableaux en C/C++
- Manipuler des vector en C++
- Manipuler des map en C++


## Partie I : Manipuler des tableaux statiques

1. Ecrire une fonction `sum` qui calcule la somme des éléments d’un tableau.

1. Ecrire une procédure `invert` qui inverse un tableau passé en paramètre. 

1. On veut effectuer des traitements sur les notes obtenues par un ensemble d’élèves à un
examen. Le nombre maximum d’élèves est fixé par la constante `MAXELEVES`. Les notes
sont mémorisées dans un tableau notes de réels. Ecrire un programme qui :
    -  saisit le nombre d’élèves dans la variable nbeleves, puis saisit les notes des élèves
dans le tableau notes,
    - puis calcule et affiche la moyenne de l’examen,
    - puis donne le nombre d’élèves ayant obtenu une note supérieure à 10, et affiche les indices de tous les élèves n’ayant pas eu la moyenne (on utilisera une seule boucle pour les 2 traitements)
    - et enfin, affiche l’indice du premier élève ayant obtenu une note supérieure à 18
ainsi que sa note.

## Partie II : Manipuler des `vector`

1. Ecrire une fonction `sum` qui calcule la somme des éléments d’un vecteur.

1. Ecrire une procédure `invert` qui inverse un vecteur passé en paramètre. 

1. Ecrire une fonction `range` qui renvoit un vecteur avec des valeurs de 0 à n.

1. Ecrire une procédure `printVector` qui affiche un vecteur passé en paramètre.

1. Ecrire un programme qui :
    - instancie un vecteur `vec1` contenant les entiers : 11, 40, 18, 5, 56 
    - ajoute l’élément 12 à la fin du vecteur 
    - affiche le vecteur (en utilisant `printVector`)
    - inverse le vecteur (en utilisant `invert`)
    - afficher la liste
    - affiche le 1er et le 3ème entier
    - supprime l'élément 40 et afficher la liste
    - crée la sous-liste du 3ème au dernier élément 
    - affiche la sous-liste

## Partie III : Manipuler des `map`

1. Ecrire une procédure `printMap` qui affiche une map passée en paramètre.

1. On souhaite recenser le nombres de votes pour chaque partie politique aux présidentiels 2040 puis effectuer les actions suivantes:
    - initialiser une map `votes` (de type `map<string, int>`) avec un nombre de votes égale à 0 et les parties suivants : "UDC", "RDH" et "ENLC" et 
    - afficher toutes les clés de la map
    - afficher toutes les valeurs de la map
    - vérifier que `'ENLC'` est une clé de la map et :
        - si c'est le cas, lui affecter 60 votes 
        - sinon afficher un message d'erreur  
    - ajouter le couple  `clé="DBP"` et `valeur=82`
