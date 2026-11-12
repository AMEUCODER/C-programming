/* TP3 - Exercice 4 : mention d'un eleve a partir de sa moyenne */
#include <stdio.h>

int main()
{
    float m;

    printf("Donner la moyenne : ");
    scanf("%f", &m);

    if (m < 0 || m > 20)
        printf("Moyenne invalide (entre 0 et 20)\n");
    else if (m < 10)
        printf("Moyenne = %.2f : Ajourne (pas de mention)\n", m);
    else if (m < 12)
        printf("Moyenne = %.2f : Passable\n", m);
    else if (m < 14)
        printf("Moyenne = %.2f : Assez bien\n", m);
    else if (m < 16)
        printf("Moyenne = %.2f : Bien\n", m);
    else
        printf("Moyenne = %.2f : Tres bien\n", m);

    return 0;
}
