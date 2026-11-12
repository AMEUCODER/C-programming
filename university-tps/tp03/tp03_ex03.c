/* TP3 - Exercice 3 : maximum et minimum de trois entiers */
#include <stdio.h>

int main()
{
    int a, b, c, min, max;

    printf("donner l'entier A : ");
    scanf("%d", &a);
    printf("donner l'entier B : ");
    scanf("%d", &b);
    printf("donner l'entier C : ");
    scanf("%d", &c);

    max = min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("le min est %d, le max est %d\n", min, max);
    return 0;
}
