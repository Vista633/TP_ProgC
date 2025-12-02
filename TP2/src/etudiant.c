#include <stdio.h>

int main() {
    // Tableaux pour stocker les informations des étudiants
    char noms[5][20] = {
        "Dupont", "Martin", "Durand", "Bernard", "Petit"
    };

    char prenoms[5][20] = {
        "Alice", "Louis", "Emma", "Hugo", "Nina"
    };

    char adresses[5][50] = {
        "12 Rue des Fleurs",
        "45 Avenue Victor Hugo",
        "3 Impasse des Lilas",
        "78 Boulevard de Paris",
        "5 Rue du Moulin"
    };

    float note_prog[5] = {14.5, 12.0, 16.5, 10.0, 18.0};
    float note_sys[5]  = {13.0, 15.5, 17.0, 11.5, 19.0};

    // Affichage des informations
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", note_prog[i]);
        printf("Note Système d'exploitation : %.2f\n", note_sys[i]);
        printf("--------------------------------------\n");
    }

    return 0;
}
