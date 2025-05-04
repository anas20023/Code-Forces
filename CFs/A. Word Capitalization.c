#include <stdio.h>
#include<string.h>

int main()
{
    char cap[1000];

    scanf("%[^\n]",&cap);

    getchar();

    int x=strlen(cap);


    if(cap[0] + 32 > 'z')
    {
        cap[0]-=32;
    }
    for(int j=0 ; j<x ; j++)
    {
        printf("%c",cap[j]);
    }



}
