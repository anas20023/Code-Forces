#include <stdio.h>
#include<string.h>

int main()
{

    int n,i,x=0;
    scanf("%d",&n);

    for(i=0; i<n ; i++)
    {

        char a[100];
        scanf("%s",&a);
        getchar();

       // a[strcspn(a,"\n")]='\0';

        if(strcmp(a,"X++")==0 )
        {
            x++;
        }
        else if(strcmp(a,"X--")==0 )
        {
            x--;
        }
        else if(strcmp(a,"--X")==0 )
        {
            --x;
        }
        else if(strcmp(a,"++X")==0 )
        {
            ++x;
        }
    }


    printf("%d\n",x);

}
