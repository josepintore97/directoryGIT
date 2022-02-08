#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[20];
    char via[30];
    char numero[15];
} Persona;

int main()
{
    FILE *fp;
    Persona persona[100];
    int c = 0, trovato = 0;
    char nome[10];

    if ((fp = fopen("Rubrica.dat", "rb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    printf("Inserire il nome da cercare.\n");
    scanf("%s", nome);

    if ((c = fread(persona, sizeof(Persona), 100, fp)) != EOF)
    {
        char ricerca[30];
        int i;

        for (i = 0; i < c && !trovato; i++)
        {
            int j = 0;

            while (persona[i].nome[j] != '_')
            {
                ricerca[j] = persona[i].nome[j];
                j++;
            }
            ricerca[j] = '\0';

            if (!strcmp(nome, ricerca))
                trovato = i;
        }
    }

    printf("%s %s %s\n", persona[trovato].nome, persona[trovato].via, persona[trovato].numero);

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}