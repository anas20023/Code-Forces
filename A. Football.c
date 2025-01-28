#include<stdio.h>
#include <string.h>
int main()
{
    char temp,str[101];
    scanf(" %[^\n]",&str);

    int count=0, len=strlen(str);

    for(int i=0 ; i< len ; i++)
    {



        for(int j=i+1 ; j< len ; j++)
        {
            if(str[len-1] ==str[i])
            {
                break;
            }

            if(str[i] == str[j])
            {
                count++;

            }
            else
            {
                count=0;
            }
        }



    }

    if(count >=7 )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
