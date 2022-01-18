#include <stdio.h>

int dimensione(char a[100])
{
    int dl = 0;

    while (a[dl] != 0)
    {
        dl++;
    }

    return dl;
}

void farfallino(char *pa, int dla, char *pb)
{
    int i = 0, dlb = 0;

    for (i = 0; i < dla; i++)
    {

        if (pa[i] == 'a' || pa[i] == 'e' || pa[i] == 'i' || pa[i] == 'o' || pa[i] == 'u')
        {
            pb[dlb] = pa[i];
            dlb++;
            pb[dlb] = 'f';
            dlb++;
            pb[dlb] = pa[i];
            dlb++;
        }
        else
        {
            pb[dlb] = pa[i];
            dlb++;
        }
    }
    pb[dlb] = 0;
}

int main()
{
    char a[100], b[200];
    int dla, dlb, i[] = {9, 10, 3, 4, 5};

    scanf("%s", a);

    dla = dimensione(a);
    farfallino(a, dla, b);
    dlb = dimensione(b);

    printf("La dimensione della parola: %s e: %d\n", a, dla);

    printf("La dimensione della parola: %s e: %d\n", b, dlb);

    return 0;
}