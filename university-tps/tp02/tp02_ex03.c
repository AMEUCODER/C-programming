/* TP2 - Exercice 3 : permutation circulaire de trois entiers (x <- y <- z <- x) */
#include <stdio.h>

int main()
{
    int x, y, z, k;

    printf("donner x : ");
    scanf("%d", &x);
    printf("donner y : ");
    scanf("%d", &y);
    printf("donner z : ");
    scanf("%d", &z);

    k = x;
    x = y;
    y = z;
    z = k;

    printf("x=%d y=%d z=%d\n", x, y, z);
    return 0;
}
