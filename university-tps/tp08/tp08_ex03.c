/* TP8 - Exercice 3 : nombre de voyelles et de consonnes d'une chaine */
#include <stdio.h>

int main()
{
    char chaine[256];
    int i, voyelles = 0, consonnes = 0;
    char c;

    printf("Entrer une chaine de caracteres: ");
    fgets(chaine, sizeof chaine, stdin);

    for (i = 0; chaine[i] != '\0'; i++) {
        c = chaine[i];
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a'; /* mise en minuscule */

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            voyelles++;
        else if (c >= 'a' && c <= 'z')
            consonnes++;
    }

    printf("Le nombre total de voyelles dans la chaine est: %d\n", voyelles);
    printf("Le nombre total de consonnes dans la chaine est: %d\n", consonnes);
    return 0;
}
