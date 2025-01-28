#include <stdio.h>

int main()

{
    int count=0,x;
    scanf("%d",&x);

    char stones[x];

    scanf(" %[^\n]", stones);

    for(int i=0 ; i< x ; i++)
    {
        if(stones[i] == stones[i+1])
        {
            count++;

        }

    }
    printf("%d\n",count);
}
