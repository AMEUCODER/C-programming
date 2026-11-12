/* TP4 - Exercice 2 : trace d'execution
 *                a    b    c
 * initialisation 3    5    8
 * c/=--a;        2    5    4
 * --b;           2    4    4
 * b--;           2    3    4
 * a*=++c;        10   3    5
 * c+=b--;        10   2    8
 * b+=--c;        10   9    7
 */
#include <stdio.h>

int main()
{
    int a = 3, b = 5, c = 8;
    c /= --a;
    --b;
    b--;
    a *= ++c;
    c += b--;
    b += --c;
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
