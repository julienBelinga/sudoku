# sudoku
OBJECTIF: cr�er un Sudoku jouable

FONCTIONNEMENT: l'id�e est de cr�er 2 tableau, le premier sera la r�f�rence, tandis que le second sera le jeu en lui-m�me.

Il faudra g�n�rer une grille de sudoku EXACTE dans le tableau de r�f�rence, une fois ceci effectu� 20 cases seront remplit al�atoirement dans le tableau de jeu (� base des donn�es du premier
tableau).
A chaque fois que le joueur saisira un num�ro � entrer dans le tableau jeu (le seul qu'il verra), son entr�e sera comparer avec le tableau r�f�rence anfin de lui signaler si son entr�e est correct
ou non (celle-ci s'affichera alors en rouge).

CLASSE:
-Console (Il s'agit d'une biblioth�que servait � changer la couleur d'une sortie dans la console)
-Contenant (Tout ce qui se passera dans le plateau)
-Plateau (Cela servirat � cr�er deux objet plateau)
-Jeu (Le jeu s'effectuera dedans, puis la fonction fonction contenu par cette objet sera appeller une fois dans le main)