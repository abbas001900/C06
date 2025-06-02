#include <stdio.h>

int main() {
    char chaine[100];          // Tableau pour stocker la chaîne d'origine (avec espaces)
    char nettoyee[100];        // Tableau pour stocker la chaîne sans espaces
    char c;                    // Variable pour lire un caractère
    int i = 0, j = 0;          // i pour parcourir `chaine`, j pour construire `nettoyee`

    // Lecture de la chaîne caractère par caractère (jusqu'à 99 caractères ou fin de ligne)
    while (i < 99) {
        scanf("%c", &c);       // Lire un caractère
        if (c == '\n') {       // Arrêter si on atteint la fin de ligne
            break;
        }

        chaine[i] = c;         // Stocker le caractère dans la chaîne originale

        // Si ce n'est pas un espace, on le copie dans la chaîne nettoyée
        if (c != ' ') {
            nettoyee[j] = c;
            j++;
        }

        i++;
    }

    nettoyee[j] = '\0';        // Terminer la chaîne nettoyée par un caractère nul

    printf("%s\n", nettoyee);  // Afficher la chaîne sans les espaces

    return 0; // Fin du programme
}
