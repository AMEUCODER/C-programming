/* TP8 - Exercice 1 : longueur d'une chaine sans strlen */
#include <stdio.h>

int main()
{
    char chaine[256];
    int longueur = 0;

    printf("Entrer une chaine de caracteres: ");
    fgets(chaine, sizeof chaine, stdin);

    while (chaine[longueur] != '\0' && chaine[longueur] != '\n')
        longueur++;

    printf("La longueur de la chaine est: %d\n", longueur);
    return 0;
}
