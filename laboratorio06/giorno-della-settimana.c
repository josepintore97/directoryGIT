#include <stdio.h>

int giorno_giuliano(int giorno, int mese, int anno)
{
    int N0, N1, N2, N3;

    N0 = (mese - 14) / 12;
    N1 = 1461 * (anno + 4800 + N0) / 4;
    N2 = 367 * (mese - 2 - 12 * N0) / 12;
    N3 = 3 * (anno + 4900 + N0) / 400;

    return N1 + N2 - N3 + giorno - 32075;
}

char giorno(int giornoGiuliano)
{
    switch (giornoGiuliano % 7)
    {
    case 0:
        return 'l';

    case 1:
        return 'm';

    case 2:
        return 'M';

    case 3:
        return 'g';

    case 4:
        return 'v';

    case 5:
        return 's';

    case 6:
        return 'd';
    }
}

int main()
{

    int g, m, a;

    printf("Inserire giorno, mese e anno per ottenere il giorno giuliano di quella data e il giorno della settimana\n");
    scanf("%d %d %d", &g, &m, &a);

    printf("%c\n", giorno(giorno_giuliano(g, m, a)));

    return 0;
}