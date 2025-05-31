#include <stdio.h>

int main() {
    char chaine[100];
    char nettoyee[100];
    char c;
    int i = 0, j = 0;

    // Lire la chaîne caractère par caractère
    while (i < 99) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }

        chaine[i] = c;

        // Si ce n'est pas un espace, on l'ajoute à la nouvelle chaîne
        if (c != ' ') {
            nettoyee[j] = c;
            j++;
        }

        i++;
    }

    nettoyee[j] = '\0'; // Fin de la chaîne nettoyée

    printf("%s\n", nettoyee);

    return 0;
}
