#include <stdio.h>

int somma(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + somma(n - 1);
    }
}

int main()
{
    int n, risultato;

    scanf("%d", &n);

    risultato = somma(n);

    printf("%d\n", risultato);

    return 0;
}