#include <stdio.h>
#include <string.h>

int main()
{
    char anas[1000];
    char anas_2[1000];

    fgets(anas,1000,stdin);
    anas[strcspn(anas, "\n")] = '\0';
    fgets(anas_2,1000,stdin);
    anas_2[strcspn(anas_2, "\n")] = '\0';


    printf("%d %d\n",strlen(anas),strlen(anas_2));
    printf("%s %s\n",anas,anas_2);
}
