/* TP9 - Exercice 2 : moitie de CH1 + moitie de CH2 dans CH3 (strlen, strncpy, strncat) */
#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[100], ch2[100], ch3[200];
    size_t l1, l2;

    printf("Introduisez la premiere chaine de caracteres: ");
    fgets(ch1, sizeof ch1, stdin);
    ch1[strcspn(ch1, "\n")] = '\0';
    printf("Introduisez la deuxieme chaine de caracteres: ");
    fgets(ch2, sizeof ch2, stdin);
    ch2[strcspn(ch2, "\n")] = '\0';

    l1 = strlen(ch1);
    l2 = strlen(ch2);

    strncpy(ch3, ch1, l1 / 2);
    ch3[l1 / 2] = '\0';          /* strncpy n'ajoute pas toujours le '\0' */
    strncat(ch3, ch2, l2 / 2);   /* strncat, lui, ajoute le '\0' */

    printf("La moitie de la chaine \"%s\" plus la moitie de la chaine \"%s\" donne \"%s\"\n",
           ch1, ch2, ch3);
    return 0;
}
