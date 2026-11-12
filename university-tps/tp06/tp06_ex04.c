/* TP6 - Exercice 4 : table de multiplication de 9 */
#include <stdio.h>

int main()
{
    int i;

    printf("Table de multiplication de 9 :\n");
    for (i = 1; i <= 10; i++)
        printf("9 x %2d = %3d\n", i, 9 * i);

    return 0;
}
