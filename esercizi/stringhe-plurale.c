#include <stdio.h>

int main()
{
    char a[40];
    char c1[] = {"gia"}, c2[] = {"cia"};
    int i = 0;
    int plurale = 0;

    scanf("%s", a);

    int c = 0;
    while (a[c])
    {
        c++;
    }

    while (!plurale && a[i])
    {

        int j = 0;

        while (a[j + i] && c1[j] && (a[i + j] == c1[j] || a[i + j] == c2[j]))
        {
            j++;
        }

        if (j == 3)
        {
            if (a[i - 1] == 'a' || a[i - 1] == 'e' || a[i - 1] == 'i' || a[i - 1] == 'o' || a[i - 1] == 'u')
            {
                a[c - 1] = 'e';
            }
            else
            {
                a[c - 2] = 'e';
                a[c - 1] = 0;
            }
            plurale = 1;
        }

        i++;
    }

    printf("%s\n", a);

    return 0;
}

//a[i - 1] == 'a' || a[i - 1] == 'e' || a[i - 1] == 'i' || a[i - 1] == 'o' || a[i - 1] == 'u'