#include <stdio.h>

int main()
{
    int a[10] = {2, 8, 4, 5, 7, 1, 3, 6, 9, 0};
    int i, j, k, s;
    for (j = 0; j < 9; j++)
    {
        for (i = 0; i < 9 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                k = a[i];
                a[i] = a[i + 1];
                a[i + 1] = k;
            }
        }
    }
    for (s = 0; s < 10; s++)
    {
        printf("%d\t", a[s]);
    }
    return 0;
}