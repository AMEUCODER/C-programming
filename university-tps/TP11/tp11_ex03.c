/* TP11 - Exercice 3 : MODIFIER(X par valeur, Y et Z par adresse)
 * Resultat attendu :
 *   3 -8 12
 *   3 12 3
 * A ne change pas (valeur) ; B recoit C et C recoit l'ancien A (adresses).
 */
#include <stdio.h>

void MODIFIER(int X, int *Y, int *Z)
{
    int T;

    T = X;
    X = *Y;
    *Y = *Z;
    *Z = T;
}

int main()
{
    int A = 3, B = -8, C = 12;

    printf("%d %d %d\n", A, B, C);
    MODIFIER(A, &B, &C);
    printf("%d %d %d\n", A, B, C);
    return 0;
}
