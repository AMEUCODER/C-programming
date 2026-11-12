/* TP2 - Exercice 2 : le programme calcule la somme de trois nombres saisis */
#include <stdio.h>

int main()
{
    int S = 0, nbr;

    printf("donner le nombre 1 : ");
    scanf("%d", &nbr);
    S = S + nbr;
    printf("donner le nombre 2 : ");
    scanf("%d", &nbr);
    S = S + nbr;
    printf("donner le nombre 3 : ");
    scanf("%d", &nbr);
    S = S + nbr;

    printf("%d\n", S);
    return 0;
}
