/* TP8 - Exercice 2 : nombre de mots d'une chaine */
#include <stdio.h>

int main()
{
    char chaine[256];
    int i, mots = 0, dansMot = 0;

    printf("Entrer une chaine de caracteres: ");
    fgets(chaine, sizeof chaine, stdin);

    /* un mot commence a chaque passage d'un separateur a un caractere normal */
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == ' ' || chaine[i] == '\t' || chaine[i] == '\n')
            dansMot = 0;
        else if (!dansMot) {
            dansMot = 1;
            mots++;
        }
    }

    printf("Le nombre total de mots dans la chaine est: %d\n", mots);
    return 0;
}
