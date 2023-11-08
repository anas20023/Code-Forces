#include <stdio.h>

int main()
{
    int n,k,temp,p=0;
    scanf("%d %d",&n,&k );
    int arr[n];

    for( int i=0 ; i< n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    temp=arr[k-1]; // k position er value = k-1

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] >0 && arr[i] >=temp)
        {
            p++;
        }
        else
        {
            p+=0;
        }
    }


    printf("%d\n",p);


}
