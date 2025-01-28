#include <stdio.h>

const int a=5;
const int b=5;


int main()
{
    int r_C,c_C,move_C=0;

    int arr[a][b];

   for(int i=0 ; i< a ; i++)
    {
        for(int j=0 ; j< b ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0 ; i< a ; i++)
    {
        for(int j=0 ; j< b ; j++)
        {
            if(arr[i][j] == 1)
            {
                r_C=i+1;
                c_C=j+1;
            }
        }

    }
    if(r_C > 3)
    {
        for(int m=r_C ; m!=3 ; m--)
        {
            move_C++;
        }
    }
    else
    {
        for(int m=r_C ; m!=3 ; m++)
        {
            move_C++;
        }
    }



    if(c_C > 3)
    {
        for(int m=c_C ; m!=3 ; m--)
        {
            move_C++;
        }
    }
    else
    {
        for(int m=c_C ; m!=3 ; m++)
        {
            move_C++;
        }
    }
    printf("%d\n",move_C);



}
