/* TP11 - Exercice 2 : passage par valeur seulement
 * Resultat attendu :
 *   2
 *   2
 *   1000
 *   2
 * MACHIN modifie sa copie locale de A, jamais A lui-meme.
 */
#include <stdio.h>

void MACHIN(int X)
{
    printf("%d\n", X);
    X = 1000;
    printf("%d\n", X);
}

int main()
{
    int A = 2;

    printf("%d\n", A);
    MACHIN(A);
    printf("%d\n", A);
    return 0;
}
