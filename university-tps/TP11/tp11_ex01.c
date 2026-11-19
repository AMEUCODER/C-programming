/* TP11 - Exercice 1 : passage par valeur (X) et par adresse (Y)
 * Resultat attendu :
 *   1 1
 *   0 1
 * X est une copie : A reste a 0. Y est l'adresse de B : B passe a 1.
 */
#include <stdio.h>

void P(int X, int *Y)
{
    X = X + 1;
    *Y = *Y + 1;
    printf("%d %d\n", X, *Y);
}

int main()
{
    int A = 0, B = 0;

    P(A, &B);
    printf("%d %d\n", A, B);
    return 0;
}
