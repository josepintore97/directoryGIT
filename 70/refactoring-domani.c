#include <stdio.h>

int bisestile(int anno)
{
    return anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0);
}

int giorni_del_mese(int mese, int anno)
{

    if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    {
        return 30;
    }
    else if (mese == 2)
    {
        if (bisestile(anno))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 31;
    }
}

int valida(int giorno, int mese, int anno)
{

    //return (giorno <= giorni_del_mese(mese, anno) && giorno>=1);
    //oppure
    if (giorno < 1)
    {
        return 0;
    }
    if (giorno > giorni_del_mese(mese, anno))
    {
        return 0;
    }

    return 1;
}

int main(void)
{

    int G, M, A;

    scanf("%d%d%d", &G, &M, &A);

    if (!valida(G,M,A))
    {
        printf("Data non valida\n");
        return 1;
    }
    

    if (G == 31 && M == 12)
    {
        printf("%d %d %d\n", 1, 1, A + 1);
    }
    else if (G == giorni_del_mese(M, A))
    {
        printf("%d %d %d\n", 1, M + 1, A);
    }
    else
    {
        printf("%d %d %d\n", G + 1, M, A);
    }

    return 0;
}