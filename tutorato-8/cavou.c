#include <stdio.h>
#include <string.h>
#define DIM 20

typedef struct
{
    int valore;
    char nome[DIM];
} Pietra;

void messaggi(int *n, int *k)
{
    printf("inserire il numero di pietre presenti all interno del cavou (massimo 20).\n");

    scanf("%d", &*n);

    while (*n > 20 || *n < 1)
    {
        printf("Numero di pietre inserite non supportatno.\nInserire nuovamente il numero di pietre.\n");
        scanf("%d", &*n);
    }

    printf("Quante pietre e riuscito a prendere il ladro? (massimo %d).\n", *n);
    scanf("%d", &*k);

    while (*k > *n || *k < 1)
    {
        printf("Numero di pietre inserite non supportatno.\nInserire nuovamente il numero di pietre.\n");
        scanf("%d", &*k);
    }
}

void definizione_pietre(Pietra *p, int dl)
{
    int i;

    for (i = 0; i < dl; i++)
    {
        printf("Nome %d° pietra:  ", i + 1);
        scanf("%s", p[i].nome);

        printf("Valore %d° pietra:  ", i + 1);
        scanf("%d", &p[i].valore);
    }
}

void ordinamento_pietre(Pietra *p, int dl)
{
    int i;

    for (i = 0; i < dl; i++)
    {
        int j;

        for (j = i + 1; j < dl; j++)
        {
            if (p[i].valore < p[j].valore)
            {
                int temp;
                char temp_nome[20];

                temp = p[i].valore;
                p[i].valore = p[j].valore;
                p[j].valore = temp;

                strcpy(temp_nome, p[i].nome);
                strcpy(p[i].nome, p[j].nome);
                strcpy(p[j].nome, temp_nome);
            }
        }
    }
}

void stampa_pietre(Pietra *p, int dl)
{
    int i;

    for (i = 0; i < dl; i++)
    {
        printf("%s\n", p[i].nome);
    }
}

int main()
{
    Pietra pietra[20];
    int n, k;

    messaggi(&n, &k);

    definizione_pietre(pietra, n);

    ordinamento_pietre(pietra, n);

    stampa_pietre(pietra, k);

    return 0;
}