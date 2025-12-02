#include <stdio.h>

int main() {
    int a = 2;   // valeur de base
    int b = 3;   // exposant
    int resultat = 1;  // résultat de a^b

    // Calcul de la puissance
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
