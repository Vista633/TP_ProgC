#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '+';

    int resultat_int;
    double resultat_div;

    printf("num1 = %d, num2 = %d, opérateur = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat_int = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat_int);
            break;

        case '-':
            resultat_int = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat_int);
            break;

        case '*':
            resultat_int = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat_int);
            break;

        case '/':
            if (num2 != 0) {
                resultat_div = (double) num1 / num2;
                printf("%d / %d = %.2f\n", num1, num2, resultat_div);
            } else {
                printf("Erreur : division par zéro interdite !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat_int = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat_int);
            } else {
                printf("Erreur : modulo par zéro interdit !\n");
            }
            break;

        case '&':
            resultat_int = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat_int);
            break;

        case '|':
            resultat_int = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat_int);
            break;

        case '~':
            resultat_int = ~num1;
            printf("~%d = %d\n", num1, resultat_int);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}

