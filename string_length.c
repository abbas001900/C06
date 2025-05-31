#include <stdio.h>

int main() {
    char chaine[100];
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

    chaine[i] = '\0'; // marquer la fin de la chaîne

    // Compter la longueur manuellement
    int longueur = 0;
    int j = 0;
    while (chaine[j] != '\0') {
        longueur++;
        j++;
    }

    printf("Longueur de la chaîne : %d\n", longueur);

    return 0;
}
