#include <stdio.h>
#include <string.h>

int main()
{


    char username[1005];

    scanf("%[^\n]", username);
    getchar();

    int count = 0;
    int x = strlen(username);

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (username[i] == username[j])
            {
                count++;
                break;
            }
        }

         count++;
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
