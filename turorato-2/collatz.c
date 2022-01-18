#include <stdio.h>

main()
{
    int a, b, s;
    int c = 0;
    printf("Numero\n");
    scanf("%d", &s);
    printf("Compreso tra\n");
    scanf("%d%d", &a, &b);

    while (s > 1 && ((s >= a && s <= b) || (s <= a && s >= b)))
    {
        if (s % 2 == 0)
        {
            s = s / 2;
        }
        if (s % 2 == 1)
        {
            s = (s * 3) + 1;
        }
        c++;
    }
    printf("%d cicli effettuati per valiri compresi tra a e b\n", c);
}