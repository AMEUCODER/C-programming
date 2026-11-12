/* TP5 - Exercice 1 : afficher le mois en lettres selon le numero saisi */
#include <stdio.h>

int main()
{
    int m;

    printf("donner le numero du mois (1-12) : ");
    scanf("%d", &m);

    switch (m) {
        case 1:  printf("janvier\n");   break;
        case 2:  printf("fevrier\n");   break;
        case 3:  printf("mars\n");      break;
        case 4:  printf("avril\n");     break;
        case 5:  printf("mai\n");       break;
        case 6:  printf("juin\n");      break;
        case 7:  printf("juillet\n");   break;
        case 8:  printf("aout\n");      break;
        case 9:  printf("septembre\n"); break;
        case 10: printf("octobre\n");   break;
        case 11: printf("novembre\n");  break;
        case 12: printf("decembre\n");  break;
        default: printf("numero de mois invalide\n");
    }
    return 0;
}
