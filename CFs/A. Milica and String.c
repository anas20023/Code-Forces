#include <stdio.h>

int main()
{
    int cse;
    scanf("%d", &cse);

    for (int i = 0; i < cse; i++)
    {
        int len, ints, ref_count= 0,ref_count_B = 0, move = 0;
        scanf("%d %d", &len, &ints);

        char ref = 'B';
        char set=ref;
        int pos;
        char s[len];
        scanf(" %[^\n]", &s);
        for (int j = 0; j < len; j++)
        {
            if (s[j] == ref)
            {
                ref_count++;
            }
        }
        ///printf("%d\n",ref_count);

        if (ref_count < ints)
        {
            for (int i = 0; i < len; i++)
            {

                if (s[i] != ref)
                {
                    s[i] = ref;
                    pos = i+1;
                    move++;
                    break;
                }
            }
        }
        else if(ref_count == len)
        {
            for (int i = 0; i < len; i++)
            {

                if (s[i] == ref)
                {
                    set='A';
                    s[i] = 'A';
                    pos =len;
                    move=1;
                }
            }

        }
        else if(ref_count==0)
        {
            for (int i = 0; i < len; i++)
            {

                if (s[i] == ref)
                {
                    set='A';
                    s[i] = 'A';
                    pos =i+1;
                    move++;
                }
            }
        }
        else if(ref_count==1)
        {
            for (int i = 0; i < len; i++)
            {

                if (s[i] == ref)
                {
                    set='A';
                    s[i] = 'A';
                    pos =i+1;
                    move++;
                }
            }
        }
        else
        {
            move=0;
        }

        if(move==0)
        {
            printf("%d\n",move);
        }
        else
        {
            printf("%d\n",move);
            printf("%d ",pos);
            printf("%c\n",set);
        }
    }
}
