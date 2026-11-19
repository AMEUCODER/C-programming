/* TP7 - Exercice 3 : matrice carree N x N (N <= 10)
 * nombre d'occurrences d'un entier x dans la matrice.
 */
#include <stdio.h>

#define NMAX 10

int main()
{
    int M[NMAX][NMAX];
    int N, I, J, x, Nbocc = 0;

    do {
        printf("Dimension de la matrice carree (1 a %d) : ", NMAX);
        scanf("%d", &N);
    } while (N < 1 || N > NMAX);

    for (I = 0; I < N; I++)
        for (J = 0; J < N; J++) {
            printf("Element[%d][%d] : ", I, J);
            scanf("%d", &M[I][J]);
        }

    printf("Donner l'entier a rechercher : ");
    scanf("%d", &x);

    for (I = 0; I < N; I++)
        for (J = 0; J < N; J++)
            if (M[I][J] == x)
                Nbocc++;

    printf("\nLe nombre d'occurrences de %d est %d\n", x, Nbocc);
    return 0;
}
