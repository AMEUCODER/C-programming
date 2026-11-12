/* TP4 - Exercice 1 : trace d'execution
 *                a    b    c
 * initialisation 3    5    8
 * a++;           4    5    8
 * a+=b;          9    5    8
 * c-=a++;        10   5   -1
 * b+=++c;        10   5    0
 */
#include <stdio.h>

int main()
{
    int a = 3, b = 5, c = 8;
    a++;
    a += b;
    c -= a++;
    b += ++c;
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
