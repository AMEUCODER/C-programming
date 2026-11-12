/* TP3 - Exercice 1 : signe d'un entier (traduction de l'algorithme) */
#include <stdio.h>

int main()
{
    int nbr;

    printf("donner un entier : ");
    scanf("%d", &nbr);

    if (nbr < 0)
        printf("le nbr %d est negatif\n", nbr);
    else if (nbr > 0)
        printf("le nbr %d est positif\n", nbr);
    else
        printf("le nbr %d est nul\n", nbr);

    return 0;
}
