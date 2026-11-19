/* TP7 - Exercice 2 : tableau 2D (L lignes, C colonnes, max 50 x 50)
 * saisie, affichage et somme de tous les elements.
 */
#include <stdio.h>

#define DMAX 50

int main()
{
    int M[DMAX][DMAX];
    int L, C, I, J, S = 0;

    do {
        printf("Dimensions L et C (1 a %d) : ", DMAX);
        scanf("%d %d", &L, &C);
    } while (L < 1 || L > DMAX || C < 1 || C > DMAX);

    for (I = 0; I < L; I++)
        for (J = 0; J < C; J++) {
            printf("Element[%d][%d] : ", I, J);
            scanf("%d", &M[I][J]);
            S += M[I][J];
        }

    printf("Matrice donnee :\n");
    for (I = 0; I < L; I++) {
        for (J = 0; J < C; J++)
            printf("%d ", M[I][J]);
        printf("\n");
    }
    printf("\nLa somme de la matrice est %d\n", S);

    return 0;
}
