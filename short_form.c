#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int main()
{
    int i, n, x, a;

    char c[101];
    scanf("%d", &a);
    while(a--)
    {
        scanf("%s", &c);
        int m = strlen(c);
        if(m>10)
        {
            printf("%c%d%c\n", c[0], m-2, c[m-1]);
        }
        else printf("%s\n", c);
    }
    return 0;
}
