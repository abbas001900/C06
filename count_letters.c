#include <stdio.h>

int main() {
    char c;
    int voyelles = 0, consonnes = 0;

    // Lire les caractères un par un jusqu'au retour à la ligne
    while (scanf("%c", &c) == 1 && c != '\n') {
        // Vérifier si c'est une lettre alphabétique
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

            // Convertir en minuscule si c'est une majuscule
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }

            // Vérifier si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
