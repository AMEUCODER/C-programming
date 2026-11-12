/* TP3 - Exercice 2 : comparaison de A et B (avec le cas A = B)
 * Avec le programme d'origine, A=7 et B=7 affichait a tort "A est inferieur a B".
 */
#include <stdio.h>

int main()
{
    int a, b;

    printf("Donner un entier A \n");
    scanf("%d", &a);
    printf("Donner un entier B \n");
    scanf("%d", &b);

    if (a > b)
        printf("A = %d est superieur a B = %d\n", a, b);
    else if (a < b)
        printf("A = %d est inferieur a B = %d\n", a, b);
    else
        printf("A = B = %d\n", a);

    return 0;
}
