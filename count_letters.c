#include <stdio.h>

int main() {
    char chaine[100];
    int voyelles = 0, consonnes = 0;
    char c;
    int i = 0;

    // Lire la chaîne caractère par caractère
    while (i < 99) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        chaine[i] = c;
        i++;
    }
    chaine[i] = '\0';  // Fin de la chaîne

    // Parcourir la chaîne
    for (int j = 0; chaine[j] != '\0'; j++) {
        char ch = chaine[j];

        // Si c'est une majuscule, la convertir en minuscule
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Vérifier si c'est une lettre
        if (ch >= 'a' && ch <= 'z') {
            // Vérifier si c'est une voyelle
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
    }

    printf("Voyelles : %d,", voyelles);
    printf("Consonnes : %d", consonnes);

    return 0;
}
