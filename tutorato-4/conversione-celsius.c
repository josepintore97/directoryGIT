#include <stdio.h>

float fahrenheitToCelsius(float f)
{
    return (f - 32) / 1.8;
}

float celsiusToFahrenheit(float c)
{
    return ((c / 5) * 9) + 32;
}

int main()
{
    int i;

    for (i = -100; i <= 100; i = i + 10)
    {
        printf("%4d C° \t %4.2f F°\n", i, celsiusToFahrenheit(i));
    }
    printf("\n");
    for (i = -100; i <= 300; i = i + 20)
    {
        printf("%4d F° \t %4.2f C°\n", i, fahrenheitToCelsius(i));
    }

    return 0;
}