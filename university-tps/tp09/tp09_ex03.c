/* TP9 - Exercice 3 : inverser la casse d'une phrase (strlen, islower, toupper, tolower, putchar) */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char phrase[256];
    size_t i;

    printf("Entrer une chaine de caracteres: ");
    fgets(phrase, sizeof phrase, stdin);
    phrase[strcspn(phrase, "\n")] = '\0';

    printf("La chaine de caracteres resultante est: ");
    for (i = 0; i < strlen(phrase); i++) {
        if (islower((unsigned char)phrase[i]))
            putchar(toupper((unsigned char)phrase[i]));
        else
            putchar(tolower((unsigned char)phrase[i]));
    }
    putchar('\n');
    return 0;
}
