#include <stdio.h>

int main() {
    char chaine[100];      // Tableau pour stocker la chaîne de caractères saisie
    char c;                // Variable pour lire un caractère
    int i = 0;             // Index pour remplir le tableau

    // Lire la chaîne caractère par caractère (jusqu’à 99 caractères ou fin de ligne)
    while (i < 99) {
        scanf("%c", &c);   // Lire un caractère
        if (c == '\n') {   // Arrêter la lecture à la fin de ligne
            break;
        }
        chaine[i] = c;     // Stocker le caractère dans le tableau
        i++;
    }

    chaine[i] = '\0';      // Ajouter le caractère de fin de chaîne

    // Compter manuellement la longueur de la chaîne
    int longueur = 0;      // Compteur de longueur
    int j = 0;             // Index pour parcourir la chaîne
    while (chaine[j] != '\0') {
        longueur++;        // Incrémenter le compteur à chaque caractère
        j++;
    }

    // Affichage de la longueur calculée
    printf("Longueur de la chaîne : %d\n", longueur);

    return 0; // Fin du programme
}
