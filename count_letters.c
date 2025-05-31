#include <stdio.h>

int main() {
    char chaine[100];
    int voyelles = 0, consonnes = 0;
    int i = 0;

    scanf("%s", chaine);

    while(chaine[i] != '\0') {
        char c = chaine[i];
        
        // Vérifier si c'est une lettre
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Convertir en minuscule pour simplifier la vérification
            if(c >= 'A' && c <= 'Z') {
                c = c + 32; // Conversion majuscule -> minuscule
            }
            
            // Vérifier si c'est une voyelle
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        i++;
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}