# TP n°3 : Pointeurs

Dans ce TP, on s'intéresse à la notion de pointeurs en C/C++. Les compétences travaillées durant cette activité sont les suivantes : 

- Comprendre et utiliser les pointeurs
- Comprendre et utiliser les pointeurs intelligents


## Partie I : Pointeurs

1. Soient **i** une variable du type int, **p** et **q** des pointeurs sur int.

    On suppose que **i** se trouve à l'adresse **0x4000**, **p** à l'adresse **0x4010**, et **q** à l'adresse **0x4020**.

    On suppose de plus que l'adresse **0x4000** contient **2**, que l'adresse **0x4010** contient **0xA010**, que l'adresse **0x4020** contient **0xA020**, que l'adresse **0xA010** contient **12**, que l'adresse **0xA020** contient **22**.

    Lesquelles parmi les expressions suivantes affectent un pointeur à une variable de type pointeur, ou un entier à une variable de type entier, et pour ces expressions, quel est leur effet sur le contenu de la mémoire.
    1. `p = i`
    1. `*p = &i`
    1. `&p = q`
    1. `p = &q`
    1. `p = *&q`
    1. `*p = q`
    1. `p = *q`
    1. `*p = *q`

2. Ecrire une fonction `int *max(int a[N], int n)` qui retourne un pointeur sur le plus grand élément du tableau $a$ de longueur $n$.

3. Quel est le contenu du tableau $a$ après l'exécution des instructions suivantes :
    ```c
    #define N 10
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = &a[0], *q = &a[N-1], temp;
    
    while (p < q) 
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
    ```

1. Soit `a` un tableau à une dimension et `p` une variable de type pointeur. On suppose que l'affectation `p = a` vient d'être exécutée.

    Lesquelles parmi les expressions ci-dessous sont illégales en raison d'incompatibilité de type ?

    Parmi les expressions légales lesquelles sont vraies ?

    1. `p == a[0]`
    1. `p == &a[0]`
    1. `*p == a[0]`
    1. `p[0] == a[0]`