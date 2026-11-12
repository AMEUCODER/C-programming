/* TP10 - Exercice 3 : fonction longueurChaine (retourne le nombre de caracteres) */
#include <stdio.h>
#include <string.h>

int longueurChaine(const char *ch)
{
    int n = 0;
    while (ch[n] != '\0')
        n++;
    return n;
}

int main()
{
    char chaine[256];

    printf("Entrer une chaine de caracteres: ");
    fgets(chaine, sizeof chaine, stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    printf("La longueur de la chaine est: %d\n", longueurChaine(chaine));
    return 0;
}
