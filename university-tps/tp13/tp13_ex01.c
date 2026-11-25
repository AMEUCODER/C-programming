/* TP13 - Exercice 1 : structures Date et Etudiant, saisie et affichage d'un etudiant */
#include <stdio.h>

struct date {
    int j;
    int m;
    int a;
};

struct etudiant {
    int ncin;
    char nom[50];
    char prenom[50];
    struct date dn;   /* date de naissance */
};

int main()
{
    struct etudiant e;

    printf("Donner les informations d'un etudiant :");
    printf("\n Donner ncin : ");
    scanf("%d", &e.ncin);
    printf(" Donner nom : ");
    scanf("%49s", e.nom);
    printf(" Donner prenom : ");
    scanf("%49s", e.prenom);
    printf(" Donner date de naissance (jj mm aaaa) : ");
    scanf("%d %d %d", &e.dn.j, &e.dn.m, &e.dn.a);

    printf("\n Les informations saisies :");
    printf("\n ncin : %d", e.ncin);
    printf("\n nom : %s", e.nom);
    printf("\n prenom : %s", e.prenom);
    printf("\n Date de naissance : %d/%d/%d\n", e.dn.j, e.dn.m, e.dn.a);

    return 0;
}
