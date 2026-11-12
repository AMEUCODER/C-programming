/* TP6 - Exercice 3 : PGCD de deux entiers positifs (algorithme d'Euclide)
 * PGCD(a, b) = PGCD(b, r) avec r = a mod b. Exemple : PGCD(32, 12) = 4
 */
#include <stdio.h>

int main()
{
    int a, b, r, a0, b0;

    do {
        printf("Donnez deux entiers positifs non nuls a et b : ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0);

    a0 = a;
    b0 = b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("PGCD(%d, %d) = %d\n", a0, b0, a);
    return 0;
}
