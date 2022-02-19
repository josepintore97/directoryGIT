#include <stdio.h>
#include <stdlib.h>

#include "listaEsami.h"

int main(int argc, char *argv[])
{
    FILE *fp;
    Record v;
    Lista l;

    if (argc != 2)
    {
        printf("Uso %s fileProve\n", argv[0]);
        exit(-1);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL)
    {
        printf("Errore nell apertura.\n");
        exit(-2);
    }

    nuovaLista(&l);
    while (fread(&v, sizeof(Record), 1, fp) == 1)
    {
        aggiorna(&l, v);
    }
    fclose(fp);

    stampa(l);

    return 0;
}