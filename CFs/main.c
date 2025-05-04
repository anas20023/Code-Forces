#include <stdio.h>

int Count_len(char *ch)
{
    int i, x=0;
    for(i=0 ; ch[i]!='\0' ; i++)
    {
        x++;
    }
    return x;
}

int main()
{
    int i,j;
    char ch[300];
    char ch_2[300];
    printf("Enter Lowercase String:");
    gets(ch);

    int x=Count_len(ch);

    for(i=0 ; i< x ; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch_2[i]=ch[i] - 32;
        }

        else
        {

            ch_2[i]=ch[i];
        }
    }
    ch_2[i]='\0';

    printf("Uppercase String is %s\n",ch_2);
}
