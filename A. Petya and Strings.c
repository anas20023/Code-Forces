#include <stdio.h>
#include<string.h>
int main()
{
    int p;

    char case_1[105];
    scanf("%[^\n]",case_1);
    getchar();
    char case_2[105];

    scanf("%[^\n]",case_2);
    getchar();

    int one=strlen(case_1);

    for(int i=0 ; i<one ; i++ )
    {
        if(case_1[i] >=65 && case_1[i] <=90)
        {
            case_1[i]+=32;
        }
        if(case_2[i] >=65 && case_2[i] <=90)
        {
            case_2[i]+=32;
        }
    }


    for(int i=0; i<one ; i++ )
    {
        if(case_1[i] == case_2[i])
        {
            p=0;
        }
        else if(case_1[i] < case_2[i])
        {
            p=-1;
            break;
        }
        else if(case_1[i]  > case_2[i])
        {
            p=1;

            break;

        }
    }
    printf("%d\n",p);
}
