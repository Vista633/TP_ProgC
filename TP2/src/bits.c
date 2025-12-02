#include <stdio.h>

int main() {
    unsigned int d = 0x10001000;  // Exemple : tu peux changer la valeur

    // Bits à vérifier (en partant de la gauche)
    int bit4  = (d >> 28) & 1;   // 4ème bit de gauche  -> bit 28
    int bit20 = (d >> 12) & 1;   // 20ème bit de gauche -> bit 12

    int resultat;

    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }

    printf("%d\n", resultat);

    return 0;
}
