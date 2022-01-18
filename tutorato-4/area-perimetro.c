#include <stdio.h>

int perimetro(int a, int b, int c)
{
    return a + b + c;
}

float area(int a, int b, int c)
{
    float p = perimetro(a, b, c) / 2.0;

    return p * (p - a) * (p - b) * (p - c);
}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("Perimetro: %d\nArea: %.2f\n", perimetro(a, b, c), area(a, b, c));

    return 0;
}