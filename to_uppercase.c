#include <stdio.h>

int main() {
    char chaine[100];       // Tableau pour stocker la chaîne convertie
    char c;                 // Variable pour lire un caractère
    int i = 0;              // Index pour remplir le tableau

    // Lecture de la chaîne caractère par caractère
    while (i < 99) {
        scanf("%c", &c);    // Lire un caractère
        if (c == '\n') {    // Arrêter la lecture si on atteint la fin de ligne
            break;
        }

        // Si le caractère est une lettre minuscule (entre 'a' et 'z'),
        // on le convertit en majuscule en soustrayant 32 (valeur ASCII)
        if (c >= 'a' && c <= 'z') {
            chaine[i] = c - 32;
        } else {
            // Sinon, on le garde tel quel (majuscule, chiffre, ponctuation, etc.)
            chaine[i] = c;
        }

        i++; // Passer à la case suivante du tableau
    }

    chaine[i] = '\0';       // Terminer la chaîne par le caractère nul '\0'

    printf("%s\n", chaine); // Afficher la chaîne convertie

    return 0; // Fin du programme
}
