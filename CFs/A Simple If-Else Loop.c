#include <stdio.h>

int main()
{
    int l,i;
    scanf("%d",&l);

    for(i=1 ; i<=l ; i++)
    {
        int x,a,b,count=0;
        scanf("%d %d %d",&x,&a,&b);

        int arr[x];

        for(int f=0 ; f< x ; f++)
        {
            scanf("%d",&arr[f]);
        }

        for(int k=0 ; k<x ; k++)
        {
            for(int p=k ; p<x ; p++)
            {
                int m=arr[k] + arr[p+1];
                if(m >= a && m<=b)
                {
                    count++;
                }
            }
        }
        printf("Case %d: %d\n",i,count);


    }
}
