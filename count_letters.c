#include <stdio.h>

int main() {
    char chaine[100];            // Tableau pour stocker la chaîne de caractères
    int voyelles = 0, consonnes = 0;  // Compteurs pour voyelles et consonnes
    char c;                      // Variable pour lire un caractère
    int i = 0;                   // Index pour remplir le tableau

    // Lecture de la chaîne caractère par caractère (jusqu'à 99 caractères ou fin de ligne)
    while (i < 99) {
        scanf("%c", &c);         // Lire un caractère
        if (c == '\n') {         // Arrêter la lecture si on atteint la fin de ligne
            break;
        }
        chaine[i] = c;           // Stocker le caractère dans la chaîne
        i++;
    }
    chaine[i] = '\0';            // Terminer la chaîne avec le caractère nul

    // Parcours de la chaîne pour analyser chaque caractère
    for (int j = 0; chaine[j] != '\0'; j++) {
        char ch = chaine[j];     // Prendre le caractère courant

        // Si c’est une majuscule, on la convertit en minuscule (A-Z → a-z)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Vérifier si le caractère est une lettre alphabétique
        if (ch >= 'a' && ch <= 'z') {
            // Vérifier si c’est une voyelle
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                voyelles++;      // Incrémenter le compteur de voyelles
            } else {
                consonnes++;     // Sinon, c'est une consonne
            }
        }
    }

    // Affichage des résultats
    printf("Voyelles : %d, Consonnes : %d", voyelles, consonnes);

    return 0; // Fin du programme
}
