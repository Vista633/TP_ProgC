#include <stdio.h>

int main() {

    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];

    /* ---- 1. Calculer la longueur de str1 ---- */
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }

    /* ---- 2. Copier str1 dans copie ---- */
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // fin de chaîne

    /* ---- 3. Concaténer str1 et str2 dans concat ---- */

    // copier str1 dans concat
    int j = 0;
    while (str1[j] != '\0') {
        concat[j] = str1[j];
        j++;
    }

    // ajouter str2 après str1
    int k = 0;
    while (str2[k] != '\0') {
        concat[j] = str2[k];
        j++;
        k++;
    }
    concat[j] = '\0'; // fin de chaîne

    /* ---- Affichage des résultats ---- */
    printf("Longueur de str1 : %d\n", longueur);
    printf("Copie de str1 : %s\n", copie);
    printf("Concaténation : %s\n", concat);

    return 0;
}
