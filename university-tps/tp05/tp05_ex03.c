/* TP5 - Exercice 3 : message selon l'heure, avec choix de la langue (f/a)
 *   0h <= heure < 18h  : Bonjour / Good Morning
 *   18h <= heure < 22h : Bonsoir / Good Evening
 *   heure >= 22h       : Bonne nuit / Good Night
 */
#include <stdio.h>

int main()
{
    char lang;
    int heure;

    printf("choisir la langue (f = francais, a = anglais) : ");
    scanf(" %c", &lang);
    printf("donner l'heure (0-23) : ");
    scanf("%d", &heure);

    if (heure < 0 || heure > 23) {
        printf("heure invalide : il y a 24 heures dans le jour (0-23)\n");
        return 1;
    }

    if (lang == 'f') {
        if (heure < 18)      printf("Bonjour\n");
        else if (heure < 22) printf("Bonsoir\n");
        else                 printf("Bonne nuit\n");
    } else if (lang == 'a') {
        if (heure < 18)      printf("Good Morning\n");
        else if (heure < 22) printf("Good Evening\n");
        else                 printf("Good Night\n");
    } else {
        printf("langue inconnue (f ou a)\n");
    }
    return 0;
}
