#include <stdio.h>
#define DIM 100

float medie(float primo, int secondo)
{
    return (primo + secondo) / 2.0;
}

int main()
{
    int a[DIM];
    int i = 0, j;
    int min, max;
    float media;
    int r = 0;
    int ripetizione;

    scanf("%d", &a[i]);

    while (a[i] > 0 && i < DIM)
    {
        i++;
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];
    media = (float)a[0];

    for (j = 1; j < i; j++)
    {
        int c = 0, h;

        if (min > a[j])
        {
            min = a[j];
        }

        if (max < a[j])
        {
            max = a[j];
        }

        media = medie(media, a[j]);

        for (h = 0; h < i; h++)
        {
            if (a[h] == a[j])
            {
                c++;
            }
            if (c > r)
            {
                r = c;
                ripetizione = a[h];
            }
        }
    }

    printf("Numero minimo: %d\n", min);
    printf("Numero massimo: %d\n", max);
    printf("La media e: %.2f\n", media);
    printf("Il numero ripetuto piu volte e: %d\n", ripetizione);

    return 0;
}