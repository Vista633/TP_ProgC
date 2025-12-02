#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1, U;  // Termes de la suite

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Affichage des premiers termes
    printf("Suite de Fibonacci jusqu'à U%d : ", n);

    if (n >= 0) printf("%d ", U0);
    if (n >= 1) printf("%d ", U1);

    // Calcul des termes suivants
    for (int i = 2; i <= n; i++) {
        U = U0 + U1;
        printf("%d ", U);
        U0 = U1;
        U1 = U;
    }

    printf("\n");
    return 0;
}
