#include <stdio.h>
#include <string.h>

struct persone
{
    char nome[21], via[21];
    int numero;
};

int main()
{
    FILE *fp;
    struct persone p[10];
    char nome[21];
    int i = 1, t;

    if ((fp = fopen("INDIRRIZZI.IND", "rb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    printf("Inserire il nome da cercare:\n");
    scanf("%s", nome);

    if ((t = fread(p, sizeof(struct persone), 10, fp)) != EOF)
    {
        for (i = 0; i < t; i++)
        {
            if (!strcmp(p[i].nome, nome))
            {
                printf("%s via %s %d\n", p[i].nome, p[i].via, p[i].numero);
            }
        }
    }

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}