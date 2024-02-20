#include <iostream>
#include <vector>
#define llb long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    llb r, c;
    while (t--)
    {
        llb n;
        cin >> n;
        llb s1 = 0;
        llb s2 = 0;
        char arr[n][n];
        r = 0;
        c = 0;
        for (llb i = 0; i < n; i++)
        {
            for (llb j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (llb i = 0; i < n; i++)
        {
            for (llb j = 0; j < n; j++)
            {
                if (arr[i][j] == '1')
                {
                    r = i;
                    c = j;
                }
            }
        }
        for (llb j = 0; j < n; j++)
        {
            if (arr[r][j] == '1')
            {
                s1++;
            }
        }
        for (llb i = 0; i < n; i++)
        {
            if (arr[i][c] == '1')
            {
                s2++;
            }
        }
        if (s1 == s2)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }
}
