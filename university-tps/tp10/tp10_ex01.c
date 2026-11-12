/* TP10 - Exercice 1 : fonction calculPrixTTC(prixHT, TVA)
 * TVA est donnee en pourcentage (ex : 19 pour 19 %). TTC = HT * (1 + TVA/100)
 */
#include <stdio.h>

float calculPrixTTC(float prixHT, float TVA)
{
    return prixHT * (1 + TVA / 100);
}

int main()
{
    float prixHT, TVA;

    printf("donner le prix HT : ");
    scanf("%f", &prixHT);
    printf("donner la TVA (en %%) : ");
    scanf("%f", &TVA);

    printf("Prix TTC = %.3f\n", calculPrixTTC(prixHT, TVA));
    return 0;
}
