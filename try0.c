#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c=0,d=0,ifone=0,iftwo=0;
    scanf("%d %d",&a,&b);
    c=sqrt(a+b);
    d=a+b;
    if(d==c*c)
    {
        ifone=1;
    }
    c=sqrt(a-b);
    d=a-b;
    if(d==c*c)
    {
        iftwo=1;
    }
    if(ifone&&iftwo)
    {
        printf(" they is ziranshudui");
    }
    else
    {
        printf("they is not ziranshudui");
    }
    {

    }
    return 0;
}