#include <stdio.h>

int main()
{
    int n, k, conta_bambini, contatore = 1;
    int i = 0;
    int bambini[100] = {0};

    scanf("%d %d", &n, &k);

    conta_bambini = n;

    while (conta_bambini > 1)
    {
        if (bambini[i] == 0 && contatore == k)
        {
            bambini[i] = 1;
            conta_bambini--;
            contatore = 1;
        }
        if (bambini[i] == 0)
        {
            contatore++;
        }
        if (i == n - 1)
        {
            i = 0;
        }
        else
        {
            i++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (bambini[i] == 0)
        {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}