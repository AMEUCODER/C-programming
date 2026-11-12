/* TP9 - Exercice 4 : nombre d'occurrences d'un caractere (strlen) */
#include <stdio.h>
#include <string.h>

int main()
{
    char chaine[256], c;
    size_t i;
    int nb = 0;

    printf("Entrer une chaine de caractere: ");
    fgets(chaine, sizeof chaine, stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    printf("Saisir le caractere a chercher: ");
    scanf(" %c", &c);

    for (i = 0; i < strlen(chaine); i++)
        if (chaine[i] == c)
            nb++;

    printf("Le nombre d'occurrence de '%c' est: %d\n", c, nb);
    return 0;
}
