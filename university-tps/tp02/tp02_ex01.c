/* TP2 - Exercice 1 : division entiere, quotient/reste, puis version float */
#include <stdio.h>

int main()
{
    int x, y, z, w;
    float fx, fy, fz;

    printf("donner un entier:\n");
    scanf("%d", &x);
    printf("donner un deuxieme entier:\n");
    scanf("%d", &y);

    if (y == 0) {
        printf("division par zero impossible\n");
        return 1;
    }

    /* Version int : la division est entiere (la partie decimale est perdue) */
    z = x / y;
    w = x % y;
    printf("%d / %d = %d", x, y, z);
    printf("\n Le quotient de la division de %d par %d = %d", x, y, z);
    printf("\n Le reste de la division de %d par %d = %d", x, y, w);

    /* Version float : la division est reelle (%f), le reste n'a plus de sens */
    fx = x;
    fy = y;
    fz = fx / fy;
    printf("\n\nVersion float : %f / %f = %f\n", fx, fy, fz);

    return 0;
}
