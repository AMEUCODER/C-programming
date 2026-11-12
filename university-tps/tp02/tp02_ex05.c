/* TP2 - Exercice 5 : conversion d'une duree en secondes -> h : mn : s */
#include <stdio.h>

int main()
{
    int T, H, M, S;

    printf("donner la duree en secondes : ");
    scanf("%d", &T);

    H = T / 3600;
    M = (T % 3600) / 60;
    S = T % 60;

    printf("%d : h %d : mn %d : s\n", H, M, S);
    return 0;
}
