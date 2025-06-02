#include <stdio.h>

int main() {
    char chaine[100];      // Déclaration d'un tableau de caractères pour stocker la chaîne saisie
    int longueur = 0;      // Variable pour stocker la longueur de la chaîne

    scanf("%s", chaine);   // Lecture de la chaîne entrée par l'utilisateur (sans espaces)

    // Calcul manuel de la longueur de la chaîne (jusqu'au caractère nul '\0')
    while(chaine[longueur] != '\0') {
        longueur++;
    }

    // Affichage de la chaîne inversée
    printf("Chaîne inversée : ");
    for(int i = longueur - 1; i >= 0; i--) {
        printf("%c", chaine[i]);   // Affiche les caractères en partant de la fin
    }
    printf("\n"); // Nouvelle ligne après l'affichage

    return 0; // Fin du programme
}
