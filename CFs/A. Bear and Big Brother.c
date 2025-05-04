#include <stdio.h>

int main()
{
    int a,b,year=0,i;
    scanf("%d %d",&a, &b);

    for(i=1; ; i++)
    {
        a*=3;
        b*=2;

        if(a>b)
        {
            year=i;
            break;
        }
    }
    printf("%d\n",year);
}
