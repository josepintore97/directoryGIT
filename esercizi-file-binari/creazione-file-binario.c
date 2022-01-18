#include <stdio.h>
#include <stdlib.h>
#define DIM 30

struct Persona
{
    char cognome[31], nome[31], sesso[2];
    int anno;
};

struct Persona leggie1();

int main()
{
    FILE *fp;
    struct Persona e[DIM];
    int fine = 0, i = 0;

    fp = fopen("people.dat", "wb");

    while (!fine)
    {
        e[i] = leggie1();

        fwrite(e, sizeof(struct Persona), DIM, fp);

        printf("\nFine (SI=1, NO=0)?  ");
        scanf("%d", &fine);
        i++;
    }

    fclose(fp);

    return 0;
}

struct Persona leggie1()
{
    struct Persona e;

    printf("Cognome?  ");
    scanf("%s", e.cognome);
    printf("\nNome?  ");
    scanf("%s", e.nome);
    printf("\nSesso?  ");
    scanf("%s", e.sesso);
    printf("\nAnno di nascita?  ");
    scanf("%d", &e.anno);

    return e;
}