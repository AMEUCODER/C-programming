/* TP7 - Exercice 1 : tableau 1D (N <= 50)
 * saisie et affichage, somme, minimum et maximum avec leur position
 * (la position retenue est celle de la premiere occurrence).
 */
#include <stdio.h>

#define NMAX 50

int main()
{
    int T[NMAX];
    int N, I, SOM = 0, PMIN, PMAX;

    do {
        printf("Dimension du tableau (1 a %d) : ", NMAX);
        scanf("%d", &N);
    } while (N < 1 || N > NMAX);

    /* 1) saisie et affichage */
    for (I = 0; I < N; I++) {
        printf("Element %d : ", I);
        scanf("%d", &T[I]);
    }
    printf("Tableau donne : ");
    for (I = 0; I < N; I++)
        printf("%d ", T[I]);
    printf("\n");

    /* 2) somme */
    for (I = 0; I < N; I++)
        SOM += T[I];
    printf("Somme des elements : %d\n", SOM);

    /* 3) minimum et maximum (comparaisons strictes : on garde la 1re occurrence) */
    PMIN = PMAX = 0;
    for (I = 1; I < N; I++) {
        if (T[I] > T[PMAX]) PMAX = I;
        if (T[I] < T[PMIN]) PMIN = I;
    }
    printf("Valeur du minimum : %d (position %d)\n", T[PMIN], PMIN);
    printf("Valeur du maximum : %d (position %d)\n", T[PMAX], PMAX);

    return 0;
}
