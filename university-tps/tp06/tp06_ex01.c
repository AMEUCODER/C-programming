/* TP6 - Exercice 1 : factoriel d'un entier naturel N */
#include <stdio.h>

int main()
{
    int N, i;
    unsigned long long f = 1; /* unsigned long long : supporte N jusqu'a 20 */

    do {
        printf("donner N (0 <= N <= 20) : ");
        scanf("%d", &N);
    } while (N < 0 || N > 20);

    for (i = 2; i <= N; i++)
        f *= i;

    printf("%d! = %llu\n", N, f);
    return 0;
}
