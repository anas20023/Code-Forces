#include <stdio.h>
#include <string.h>
int main()
{
    char inp[105];

    scanf("%[^\n]",&inp);
    getchar();

    int l,x=strlen(inp);


    for(int i=0 ; i<x ; i++ )
    {
        if(inp[i] >='A' && inp[i] <='Z')
        {
            inp[i]+=32;
        }
        if(inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u'|| inp[i] == 'y')
        {
            for(int k= i ; k <x ; k++)
            {
                inp[k]=inp[k+1];
            }
            x--;
            i--;
        }

    }


    for(int i=0 ; i<x ; i++ )
    {
        printf(".");
        printf("%c",inp[i]);
    }

}
