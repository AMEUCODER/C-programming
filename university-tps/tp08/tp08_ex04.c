/* TP8 - Exercice 4 : extraire une sous-chaine
 * La position de depart est comptee a partir de 1 (comme dans l'exemple : 19 -> "info").
 */
#include <stdio.h>

int main()
{
    char chaine[256], sous[256];
    int i, debut, longueur, n = 0, taille = 0;

    printf("Entrer la chaine: ");
    fgets(chaine, sizeof chaine, stdin);
    while (chaine[taille] != '\0' && chaine[taille] != '\n')
        taille++;
    chaine[taille] = '\0';

    printf("Entrer la position de depart de l'extraction: ");
    scanf("%d", &debut);
    printf("Entrer la longueur de la sous-chaine: ");
    scanf("%d", &longueur);

    if (debut < 1 || debut > taille || longueur < 0) {
        printf("position ou longueur invalide\n");
        return 1;
    }

    for (i = debut - 1; i < taille && n < longueur; i++)
        sous[n++] = chaine[i];
    sous[n] = '\0';

    printf("La sous-chaine extraite de la chaine est: \"%s\"\n", sous);
    return 0;
}
