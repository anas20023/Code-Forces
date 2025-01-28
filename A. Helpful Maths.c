#include <stdio.h>
#include<string.h>

int main()
{
    char s[105];

    scanf("%[^\n]",&s);
    getchar();

    int p=strlen(s);

    for(int i=0 ; i<p-1; i++ )
    {
        for(int j=i+2 ; j< p ; j+=2)
        {
            if(s[i] > s[j])
            {

                int temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }

    }

    for(int m=0 ; m<p ; m++)
    {
        printf("%c",s[m]);
    }

}
