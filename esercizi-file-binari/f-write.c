#include <stdio.h>

int main()
{
    FILE *fp;
    short int x = 32134;
    float a[5] = {1.2, 2.3, 5.0, 6.7, 8.9};

    fp = fopen("binario.bin", "wb");

    fwrite(a, 4, 5, fp); //indirizzo del dato che voglio scrivere, dimensione di ciascuno
                         // degli elementi, numero di elementi, e il file pointer.

    fclose(fp);

    return 0;
}