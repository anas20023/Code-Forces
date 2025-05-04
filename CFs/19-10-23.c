#include <stdio.h>

int main()
{

    int i,x,j=1;

    while(1)
    {
        int sum=0,must_stack=0,move_box=0;
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        int arr[x];
        for(i=0 ; i<x ; i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        must_stack=sum/x;

        for(i=0 ; i<x ; i++)
        {
            if(arr[i] > must_stack)
            {
                move_box+=arr[i]-must_stack;

            }
        }

        printf("Set #%d\n",j);
        j++;
        printf("The minimum number of moves is %d.\n",move_box);
        printf("\n");


    }






}
