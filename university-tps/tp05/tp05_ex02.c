/* TP5 - Exercice 2 : le caractere saisi est-il une voyelle ? (switch) */
#include <stdio.h>

int main()
{
    char ch;

    printf("Donner un caractere : ");
    scanf(" %c", &ch); /* l'espace avant %c ignore les blancs */

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c est une voyelle\n", ch);
            break;
        default:
            printf("%c n'est pas une voyelle\n", ch);
    }
    return 0;
}
