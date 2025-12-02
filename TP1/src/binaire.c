#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int i = 0; i < taille; i++) {
        int n = nombres[i];
        int reste;
        int bits[32];
        int j = 0;

        if (n == 0) {
            printf("Décimal : %d  Binaire : 0\n", n);
            continue;
        }

        while (n > 0) {
            reste = n % 2;
            bits[j] = reste;
            n = n / 2;
            j++;
        }

        printf("Décimal : %d  Binaire : ", nombres[i]);
        for (int k = j - 1; k >= 0; k--) {
            printf("%d", bits[k]);
        }
        printf("\n");
    }

    return 0;
}
