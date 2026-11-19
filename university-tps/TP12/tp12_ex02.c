/* TP12 - Exercice 2 : menu des methodes de tri
 * Tableau de depart : {64, 34, 25, 12, 22, 11, 90}
 * Chaque tri travaille sur une copie, donc on peut comparer les methodes
 * sur le meme tableau d'origine.
 */
#include <stdio.h>

#define N 7

void afficher(const int T[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", T[i]);
    printf("\n");
}

void copier(const int src[], int dst[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        dst[i] = src[i];
}

void echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/* Tri a bulles : fait remonter le plus grand element a la fin a chaque passe */
void tri_bulles(int T[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (T[j] > T[j + 1])
                echanger(&T[j], &T[j + 1]);
}

/* Tri par selection : place le plus petit element restant a la position i */
void tri_selection(int T[], int n)
{
    int i, j, imin;
    for (i = 0; i < n - 1; i++) {
        imin = i;
        for (j = i + 1; j < n; j++)
            if (T[j] < T[imin])
                imin = j;
        if (imin != i)
            echanger(&T[i], &T[imin]);
    }
}

/* Tri par insertion : insere chaque element dans la partie deja triee */
void tri_insertion(int T[], int n)
{
    int i, j, cle;
    for (i = 1; i < n; i++) {
        cle = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > cle) {
            T[j + 1] = T[j];
            j--;
        }
        T[j + 1] = cle;
    }
}

int main()
{
    const int original[N] = {64, 34, 25, 12, 22, 11, 90};
    int T[N];
    int choix;

    do {
        printf("\n===== MENU DES TRIS =====\n");
        printf("1. Tri a bulles\n");
        printf("2. Tri par selection\n");
        printf("3. Tri par insertion\n");
        printf("4. Afficher le tableau d'origine\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        if (scanf("%d", &choix) != 1)
            break;

        copier(original, T, N);
        switch (choix) {
            case 1:
                tri_bulles(T, N);
                printf("Tri a bulles     : ");
                afficher(T, N);
                break;
            case 2:
                tri_selection(T, N);
                printf("Tri par selection: ");
                afficher(T, N);
                break;
            case 3:
                tri_insertion(T, N);
                printf("Tri par insertion: ");
                afficher(T, N);
                break;
            case 4:
                printf("Tableau d'origine: ");
                afficher(original, N);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}
