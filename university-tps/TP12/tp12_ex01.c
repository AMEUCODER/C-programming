/* TP12 - Exercice 1 : trier un tableau (N <= 20) par ordre croissant
 * Methode : tri a bulles, avec la fonction echanger(int *a, int *b).
 */
#include <stdio.h>

#define NMAX 20

void saisir_Tab(int T[], int N)
{
    int i;
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
}

void echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void trier_Tab(int T[], int N)
{
    int i, j;
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (T[j] > T[j + 1])
                echanger(&T[j], &T[j + 1]);
}

void afficher_Tab(int T[], int N)
{
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", T[i]);
    printf("\n");
}

int main()
{
    int T[NMAX], N;

    do {
        printf("Donner la taille du tableau (1 a %d) : ", NMAX);
        scanf("%d", &N);
    } while (N < 1 || N > NMAX);

    saisir_Tab(T, N);
    printf("Tableau saisi : ");
    afficher_Tab(T, N);

    trier_Tab(T, N);
    printf("Tableau trie  : ");
    afficher_Tab(T, N);

    return 0;
}
