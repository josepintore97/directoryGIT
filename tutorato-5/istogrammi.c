#include <stdio.h>
#define DIM 100

int main()
{
    int n, i, dl, j;
    int a[DIM];

    printf("Inserire la lunghezza dell array\n");

    scanf("%d", &n);

    for (dl = 0; dl < n; dl++)
    {
        scanf("%d", &a[dl]);
    }

    printf("\n");

    for (i = 0; i < dl; i++)
    {
        printf("%d ", a[i]);

        for (j = 0; j < a[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}