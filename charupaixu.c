#include <stdio.h>

int main()
{
    int a[10] = {2, 8, 4, 5, 7, 1, 3, 6, 9, 0};
    int i,j,tem,s;
    for(i=0;i<10;i++)
    {
        tem=a[i];
        for(j=i-1;j>=0&&a[j]>tem;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=tem;
    }
    for (s = 0; s < 10; s++)
    {
        printf("%d\t", a[s]);
    }
    return 0;
}