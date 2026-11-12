/* TP8 - Exercice 5 : concatener deux chaines (sans strcat), separees par un espace */
#include <stdio.h>

int main()
{
    char ch1[100], ch2[100], res[201];
    int i, n = 0;

    printf("Entrer la premiere chaine: ");
    fgets(ch1, sizeof ch1, stdin);
    printf("Entrer la deuxieme chaine: ");
    fgets(ch2, sizeof ch2, stdin);

    for (i = 0; ch1[i] != '\0' && ch1[i] != '\n'; i++)
        res[n++] = ch1[i];
    res[n++] = ' ';
    for (i = 0; ch2[i] != '\0' && ch2[i] != '\n'; i++)
        res[n++] = ch2[i];
    res[n] = '\0';

    printf("Apres concatenation, la chaine est: %s\n", res);
    return 0;
}
