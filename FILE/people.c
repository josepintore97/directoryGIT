#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIMnome 31
#define DIMcognome 31
#define DIMsesso 2

typedef struct
{
    char cognome[DIMcognome];
    char nome[DIMnome];
    char sesso[DIMsesso];
    int anno_di_nascita;
} Persone;

int main()
{
    FILE *fp;
    Persone persona[10];
    char c[DIMcognome], parola;
    int i, anno, dl = 0, finito = 0;

    if ((fp = fopen("people.txt", "r")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    while (fscanf(fp, "%s%s%s%d", persona[dl].cognome,
                  persona[dl].nome, persona[dl].sesso,
                  &persona[dl].anno_di_nascita) == 4)
    {
        dl++;
    }

    /*for (i = 0; i < 10, !finito; i++)
    {
        fscanf(fp, "%s", &c);
        strcpy(persona[i].cognome, c);
        fscanf(fp, "%s", &c);
        strcpy(persona[i].nome, c);
        fscanf(fp, "%s", &c);
        strcpy(persona[i].sesso, c);
        fscanf(fp, "%d", &anno);
        persona[i].anno_di_nascita = anno;
        fgetc(fp) == EOF ? finito = 1, dl++ : dl++;
    }*/

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }

    return 0;
}