#include <stdio.h>
#include <math.h>

main()
{
    float x, potenza, seno, addendo;
    int segno;
    double fattoriale;
    int n;

    scanf("%f", &x);

    segno = 1;
    potenza = x;
    fattoriale = 1.0;

    seno = segno * potenza / fattoriale;

    for (n = 1; n < 10; n++)
    {
        segno = segno * -1;
        potenza = potenza * x * x;
        fattoriale = fattoriale * (2 * n) * (2 * n + 1);

        addendo = segno * potenza / fattoriale;

        seno = seno + addendo;
    }
    printf("%f\n", seno);
}