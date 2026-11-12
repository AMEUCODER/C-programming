/* TP10 - Exercice 2 : fonction qui affiche si un entier est pair ou impair */
#include <stdio.h>

void pairImpair(int n)
{
    if (n % 2 == 0)
        printf("%d est pair\n", n);
    else
        printf("%d est impair\n", n);
}

int main()
{
    int n;

    printf("donner un entier : ");
    scanf("%d", &n);
    pairImpair(n);
    return 0;
}
