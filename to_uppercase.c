#include <stdio.h>

int main() {
    char chaine[100];
    char c;
    int i = 0;

    // Lecture de la chaîne caractère par caractère
    while (i < 99) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }

        // Si c'est une lettre minuscule, on la convertit en majuscule
        if (c >= 'a' && c <= 'z') {
            chaine[i] = c - 32;
        } else {
            chaine[i] = c;
        }

        i++;
    }

    chaine[i] = '\0';  // Fin de chaîne

    printf("%s\n", chaine);

    return 0;
}
