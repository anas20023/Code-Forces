#include <stdio.h>

int main()
{
    int x,count=0,temp;
    scanf("%d",&x);

    for(int i=5 ; i>=1 ; i--)
    {

            count=x / i;
            x = x-count;


    }

    printf("%d\n",count);

}
