/* TP10 - Exercice 4 : fonction qui inverse une chaine (sur place) */
#include <stdio.h>
#include <string.h>

void inverserChaine(char *ch)
{
    int i = 0, j = (int)strlen(ch) - 1;
    char tmp;

    while (i < j) {
        tmp = ch[i];
        ch[i] = ch[j];
        ch[j] = tmp;
        i++;
        j--;
    }
}

int main()
{
    char chaine[256];

    printf("Entrer une chaine de caracteres: ");
    fgets(chaine, sizeof chaine, stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    inverserChaine(chaine);
    printf("Chaine inversee: %s\n", chaine);
    return 0;
}
