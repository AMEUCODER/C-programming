/* TP9 - Exercice 1 : comparer deux chaines avec strcmp */
#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[100], ch2[100];
    int cmp;

    printf("Introduisez la premiere chaine de caracteres: ");
    fgets(ch1, sizeof ch1, stdin);
    ch1[strcspn(ch1, "\n")] = '\0';
    printf("Introduisez la deuxieme chaine de caracteres: ");
    fgets(ch2, sizeof ch2, stdin);
    ch2[strcspn(ch2, "\n")] = '\0';

    cmp = strcmp(ch1, ch2);
    if (cmp < 0)
        printf("%s precede %s\n", ch1, ch2);
    else if (cmp > 0)
        printf("%s precede %s\n", ch2, ch1);
    else
        printf("Les deux chaines sont identiques\n");

    return 0;
}
