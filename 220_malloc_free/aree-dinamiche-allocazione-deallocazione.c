#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *alloca(int dl)
{
    char *ps;

    if ((ps = (char *)malloc(dl)) == NULL)
    {
        printf("Errore nell allocazione.\n");
        exit(1);
    }

    return ps;
}

void stampa(char ps)
{
    printf("%s\n", ps);
}

void libera(char **ps)
{
    free((void *)*ps);

    *ps = NULL;
}

int main(int argv, char *argc)
{
    int dl;
    char *ps;

    printf("Dimensione dell array?\n");
    scanf("%d", &dl);

    ps = alloca(dl);

    strcpy(ps, "ferrara");
    stampa(ps);
    libera(&ps);
}