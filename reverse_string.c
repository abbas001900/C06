#include <stdio.h>

int main() {
    char chaine[100];
    int longueur = 0;
    
    scanf("%s", chaine);
    
    // Calcul de la longueur manuellement
    while(chaine[longueur] != '\0') {
        longueur++;
    }
    
    printf("Chaine inversée : ");
    for(int i = longueur - 1; i >= 0; i--) {
        printf("%c", chaine[i]);
    }
    printf("\n");
    
    return 0;
}