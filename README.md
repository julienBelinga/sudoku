# sudoku
OBJECTIF: créer un Sudoku jouable

FONCTIONNEMENT: l'idée est de créer 2 tableau, le premier sera la référence, tandis que le second sera le jeu en lui-même.

Il faudra générer une grille de sudoku EXACTE dans le tableau de référence, une fois ceci effectué 20 cases seront remplit aléatoirement dans le tableau de jeu (à base des données du premier
tableau).
A chaque fois que le joueur saisira un numéro à entrer dans le tableau jeu (le seul qu'il verra), son entrée sera comparer avec le tableau référence anfin de lui signaler si son entrée est correct
ou non (celle-ci s'affichera alors en rouge).

CLASSE:
-Console (Il s'agit d'une bibliothèque servait à changer la couleur d'une sortie dans la console)
-Contenant (Tout ce qui se passera dans le plateau)
-Plateau (Cela servirat à créer deux objet plateau)
-Jeu (Le jeu s'effectuera dedans, puis la fonction fonction contenu par cette objet sera appeller une fois dans le main)