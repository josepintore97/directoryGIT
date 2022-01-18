#include <stdio.h>

int main()
{
    int a[10], b[10];
    int merge[20];
    int dlA, dlB, dlM;
    int ia = 0, ib = 0, im, i;
    int finito = 1;

    printf("Inserire un massimo di 10 numeri ordinati, inserire 0 per terminare (il programma termina se non sono ordinati)\n");

    for (dlA = 0; dlA < 10 && finito; dlA++)
    {
        scanf("%d", &a[dlA]);

        if (a[dlA] < 1)
        {
            finito = 0;
        }
        if (dlA > 0 && a[dlA] < a[dlA - 1] && a[dlA] != 0)
        {
            return 1;
        }
    }

    printf("Inserire un massimo di 10 numeri ordinati, inserire 0 per terminare (il programma termina se non sono ordinati)\n");

    finito = 1;

    for (dlB = 0; dlB < 10 && finito; dlB++)
    {
        scanf("%d", &b[dlB]);

        if (b[dlB] < 1)
        {
            finito = 0;
        }
        if (dlB > 0 && b[dlB] < b[dlB - 1] && b[dlB] != 0)
        {
            return 1;
        }
    }

    dlM = 1;

    for (im = 0; im < dlM; im++)
    {
        if (a[ia] < b[ib] && ia < dlA - 1 && ib < dlB)
        {
            merge[im] = a[ia];
            ia++;
            dlM++;
        }
        else if (b[ib] < a[ia] && ib < dlB - 1 && ia < dlA)
        {
            merge[im] = b[ib];
            ib++;
            dlM++;
        }
    }

    if (ia < dlA - 1)
    {
        for (i = ia; i < dlA - 1; i++)
        {
            merge[dlM - 1] = a[i];
            dlM++;
        }
    }
    else
    {
        for (i = ib; i < dlB - 1; i++)
        {
            merge[dlM - 1] = b[i];
            dlM++;
        }
    }

    for (i = 0; i < dlM - 1; i++)
    {
        printf("%d  ", merge[i]);
    }

    printf("\n");

    return 0;
}