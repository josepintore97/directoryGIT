#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DIM 100000
#define VITE 10

typedef char Parola[31];

typedef struct
{
    char lettere_segrete[31];
    int segrete[31];
    int vite;
} Parola_segreta;

int rnd_(int dl)
{
    srand(time(NULL));
    return rand() % dl + 1;
}

void assegna_parola(char *p_segreta, Parola *parola, int dl)
{
    int c;
    c = rnd_(dl);

    strcpy(p_segreta, parola[c]);
}

void messaggi_gioco(char *lettera)
{
    printf("Inserire una lettera:\n");
    scanf("%s", lettera);
}

void inizializza_gioco(Parola_segreta *p_segreta, int dl)
{
    int i;

    for (i = 0; i <= dl; i++)
    {
        p_segreta->segrete[i] = 1;
    }

    p_segreta->vite = VITE;
}

void stampa(Parola_segreta *p_segreta, int dl)
{
    int i = 0;

    for (i = 0; i < dl; i++)
    {
        p_segreta->segrete[i] ? printf(" _ ") : printf(" %c ", p_segreta->lettere_segrete[i]);
    }
    printf("\n");
}

void controllo_lettera(Parola_segreta *p_segreta, int dl, char lettera[], int *vittoria)
{
    int i, c = 0;

    for (i = 0; i <= dl; i++)
    {
        if (lettera[0] == p_segreta->lettere_segrete[i])
        {
            p_segreta->segrete[i] = 0;
            c++;
        }
    }

    if (c == 0)
        --p_segreta->vite;

    for (i = 0; i < dl; i++)
    {
        if (p_segreta->segrete[i] == 0)
            c++;
    }

    if (c == dl + 1)
        *vittoria = 1;
}

int main()
{
    FILE *fp;
    Parola parola[DIM];
    Parola_segreta p_segreta;
    char lettera[2];
    int i = 0, dl, vittoria = 0;

    if ((fp = fopen("words.italian.txt", "rt")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    while (fscanf(fp, "%s", parola[i]) == 1)
    {
        i++;
    }

    assegna_parola(p_segreta.lettere_segrete, parola, i);
    dl = strlen(p_segreta.lettere_segrete);
    inizializza_gioco(&p_segreta, dl);

    while (p_segreta.vite > 0 && !vittoria)
    {
        stampa(&p_segreta, dl);
        messaggi_gioco(lettera);
        controllo_lettera(&p_segreta, dl, lettera, &vittoria);
    }

    vittoria ? printf("Bravo hai vinto.\n") : printf("Mi dispiace hai perso.\n");

    printf("parola segreta: %s\n", p_segreta.lettere_segrete);

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }

    return 0;
}