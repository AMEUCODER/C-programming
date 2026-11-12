/* TP6 - Exercice 2 : somme des entiers impairs inferieurs a N */
#include <stdio.h>

int main()
{
    int N, i, S = 0;

    printf("Entrez un entier N : ");
    scanf("%d", &N);

    for (i = 1; i < N; i += 2)
        S += i;

    printf("La somme des entiers impairs inferieurs a %d est : %d\n", N, S);
    return 0;
}
