# TP n°0 : Initiation à l'informatique

Ce premier TP, permet de décrire les notions fondamentales en informatique.

Les compétences travaillées durant cette activité sont les suivantes :

- Qu'est-ce qui compose un ordinateur ?
- Qu'est-ce qu'un système d'exploitation ?
- Comment est représentée l'information dans un ordinateur ?
- Qu'est-ce qu'un système de fichier ?
- Qu'est'ce qu'un interpréteur de commandes ?

## Ordinateur

L'ordinateur est une machine de prédilection en informatique. Vous allez utiliser une telle machine pendant de longues heures. Cela vaut donc le coup de savoir, au moins sommairement, de quoi est fait un ordinateur.

- visionnez la vidéo [sur ce qu'a un ordinateur dans le ventre](https://www.lemonde.fr/blog/binaire/2017/05/31/podcast-le-ventre-de-mon-ordi/)
- renseignez-vous sur les termes employés, dont les termes périphériques (interne/externe, entrée/sortie), disque dur, barettes de RAM, carte graphique, carte mère, micro-processeur.

## Système d'exploitation

Le _système d’exploitation_ se situe à l'interface entre deux mondes : le logiciel et le matériel, composé essentiellement de mémoire, de processeur(s), de périphériques. Le rôle du système d'exploitation est d'assurer que ces éléments matériels, requis par les logiciels en cours d'exécution, soient utilisés de manière partagée, équilibrée et sûre.

Cette vidéo explique le [rôle du système d'exploitation](https://www.lemonde.fr/blog/binaire/2017/06/14/podcast-systeme-dexploitation/), notamment dans la gestion virtualisée de la mémoire, le contrôle de l'exécution via l'ordonnanceur et la médiation par les appels systèmes.

## Codage des informations

Toutes les informations que l'ordinateur manipule sont codées en binaire, c'est-à-dire en suites de 0 et 1 :

- les [entiers naturels et relatifs](https://fr.wikipedia.org/wiki/Syst%C3%A8me_binaire) bien sûr,
- les nombres décimaux dits [à virgule flottante](https://fr.wikipedia.org/wiki/Virgule_flottante),
- les caractères ([ASCII](https://fr.wikipedia.org/wiki/American_Standard_Code_for_Information_Interchange#Description), [unicode](https://fr.wikipedia.org/wiki/Unicode)),
- les données multimédias (son, image, vidéo, page web...),
- les programmes...

Lire ce billet introduisant le [codage binaire](https://interstices.info/nom-de-code-binaire/) est un minimum.

Mais pourquoi le binaire ? C'est d'abord un compromis entre la quantité de symboles et la quantité de chiffres nécessaires pour représenter un nombre possible. En décimal, il nous faut 4 chiffres pour réprésenter 1024, c'est pas mal. Mais nous avons dix symboles possibles 0, 1, ... 9 pour chaque chiffre. C'est beaucoup et difficile à matérialiser avec une bonne résistance au bruit. En unaire, on n'a au contraire qu'un seul symbole. C'est facile à matérialiser (une pierre, une diode allumée, etc.), mais il nous faut 1024 chiffres pour représenter 1024 ! En binaire, on a deux symboles, généralement notées 0 et 1. C'est encore facile à matérialiser (tension inférieure ou supérieure à un seuil, courant électrique qui passe ou ne passe pas, etc.) et il ne faut que log2(1024) = 10 chiffres pour représenter 1024, ce qui est tout à fait raisonnable compte-tenu de la petitesse et la complexité des circuits électroniques actuellement construits.

## Fichier et système de fichiers

Le terme [système de fichiers](https://fr.wikipedia.org/wiki/Syst%C3%A8me_de_fichiers) désigne à la fois l'organisation des informations mémorisées sur les périphériques de stockage de l'ordinateur et la vue logique hiérarchique présentée à l'utilisateur. Les informations sont stockées dans des paquets appelées _fichiers_, écrits dans un certain _format_, c'est-à-dire selon une certaine manière d'encoder les informations en binaire. Ces fichiers peuvent être aussi bien du texte, une page web, un morceau de musique, une photo de vacance, un script, un logiciel, etc. Un _répertoire_ regroupe des fichiers ou d'autres répertoires, ce qui aboutit à une hiérarchie de fichiers. C'est le [chemin d'accès](<https://en.wikipedia.org/wiki/Path_(computing)>) qui permet de localiser un fichier de la hiérarchie.

Vous maîtrisez ce qu'est un fichier, un répertoire (= dossier), un chemin d'accès, un lien symbolique, le répertoire courant ? Si oui, passez à la suite.
Si non, jouez à [Find your path](http://demo710.univ-lyon1.fr/FYP/) pour vous familiariser avec la représentation des chemins dans les environnements de type unix. Si vous avez joué déjà 20 minutes et que vous ne voyez pas le rapport avec ce qui précède, contactez l'enseignant.

## Interpréteur de commandes

La [console](https://doc.ubuntu-fr.org/console) est une interface textuelle qui permet à un utilisateur de demander à l'ordinateur de réaliser certaines tâches, uniquement à l'aide d'un écran et d'un clavier. Sur un serveur sans interface graphique la console est généralement directement accessible au démarrage. Sur une machine grand public, on utilise un [émulateur de terminal](https://doc.ubuntu-fr.org/terminal), c'est-à-dire un programme qui émule une console dans une interface graphique.

> Dans Windows, l'émulateur de terminal s'appelle **Powershell** et est disponible sur toutes les machines.

Une fois dans le terminal, l'utilisateur n'a qu'à écrire au clavier la _commande_ qu'il souhaite que le système d'exploitation exécute.

**Quelques commandes Powershell utiles**

- `cd` (**c**hange **d**irectory) : changer d'emplacement dans le système de fichier
- `dir` (**dir**ectory) : affiche les éléments d'un dossier
- `cp` (**c**o**p**y) : copie un fichier
- `del` (**del**ete) : supprimer un fichier ou un dossier

## Référence

Tristan Troussil, Passeport Informatique Télécoms (PIT), 2021, https://github.com/troussil
