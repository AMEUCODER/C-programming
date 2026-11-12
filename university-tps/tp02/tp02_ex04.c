/* TP2 - Exercice 4 : programme corrige (points 1, 2 et 3 de l'enonce)
 * Erreurs du code d'origine : points-virgules manquants apres
 * a=a*5, printf("a=%d",a), a=a+1 et b=a.
 */
#include <stdio.h>

/* 1. version corrigee */
void version1(void)
{
    int a = 3, b, c;
    a = a * 5;
    printf("a=%d", a);
    a = a + 1;
    b = a;
    printf("\n b vaut %d et a vaut %d", b, a);
    c = b;
    b = b + 1;
    printf("\n c vaut %d et b vaut %d", c, b);
}

/* 2. a=a+1 -> a++ et b=b+1 -> b++ : les resultats ne changent pas */
void version2(void)
{
    int a = 3, b, c;
    a = a * 5;
    printf("a=%d", a);
    a++;
    b = a;
    printf("\n b vaut %d et a vaut %d", b, a);
    c = b;
    b++;
    printf("\n c vaut %d et b vaut %d", c, b);
}

/* 3. b=a -> b=a++ (affecte puis incremente) et c=b -> c=++b (incremente puis affecte) */
void version3(void)
{
    int a = 3, b, c;
    a = a * 5;
    printf("a=%d", a);
    a++;
    b = a++;
    printf("\n b vaut %d et a vaut %d", b, a);
    c = ++b;
    b++;
    printf("\n c vaut %d et b vaut %d", c, b);
}

int main()
{
    printf("--- Version 1 ---\n");
    version1();
    printf("\n\n--- Version 2 (a++ / b++) ---\n");
    version2();
    printf("\n\n--- Version 3 (b=a++ / c=++b) ---\n");
    version3();
    printf("\n");
    return 0;
}
