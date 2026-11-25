/* TP13 - Exercice 2 : tableau T de 3 etudiants (structure de l'exercice 1) */
#include <stdio.h>

#define NB 3

struct date {
    int j;
    int m;
    int a;
};

struct etudiant {
    int ncin;
    char nom[50];
    char prenom[50];
    struct date dn;
};

int main()
{
    struct etudiant T[NB];
    int i;

    for (i = 0; i < NB; i++) {
        printf("Donner les informations de l'etudiant %d :", i + 1);
        printf("\n Donner ncin : ");
        scanf("%d", &T[i].ncin);
        printf(" Donner nom : ");
        scanf("%49s", T[i].nom);
        printf(" Donner prenom : ");
        scanf("%49s", T[i].prenom);
        printf(" Donner date de naissance (jj mm aaaa) : ");
        scanf("%d %d %d", &T[i].dn.j, &T[i].dn.m, &T[i].dn.a);
    }

    for (i = 0; i < NB; i++) {
        printf("\n-----------------------------------------------");
        printf("\n Les informations de l'etudiant %d :", i + 1);
        printf("\n ncin : %d", T[i].ncin);
        printf("\n nom : %s", T[i].nom);
        printf("\n prenom : %s", T[i].prenom);
        printf("\n Date de naissance : %d/%d/%d", T[i].dn.j, T[i].dn.m, T[i].dn.a);
    }
    printf("\n");

    return 0;
}
