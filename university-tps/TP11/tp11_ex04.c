/* TP11 - Exercice 4 : MANIPULER(X, Y par valeur, Z par adresse)
 * Resultat attendu :
 *   208 5 -34
 *   208 5 -34
 *   104 10 114
 *   208 5 114
 * Seul C change dans le programme principal, car Z est passe par adresse.
 */
#include <stdio.h>

void MANIPULER(int X, int Y, int *Z)
{
    printf("%d %d %d\n", X, Y, *Z);
    X = X / 2;          /* DIV : division entiere */
    Y = Y * 2;
    *Z = X + Y;
    printf("%d %d %d\n", X, Y, *Z);
}

int main()
{
    int A = 208, B = 5, C = -34;

    printf("%d %d %d\n", A, B, C);
    MANIPULER(A, B, &C);
    printf("%d %d %d\n", A, B, C);
    return 0;
}
