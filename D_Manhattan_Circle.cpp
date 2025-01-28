////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          INTAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//                                                                    ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Qtpie 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;
        char arr[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }

        ll r = -1, c = -1;
        for (int i = 0; i < a && c == -1; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr[i][j] == '#')
                {
                    c = j;
                    break;
                }
            }
        }

        ll maxc = 0;
        for (int i = 0; i < a; i++)
        {
            ll temp = 0;
            for (int j = 0; j < b; j++)
            {
                if (arr[i][j] == '#')
                {
                    temp++;
                    if (temp > maxc)
                    {
                        maxc = temp;
                        r = i;
                    }
                }
            }
        }

        if (r != -1 && c != -1)
        {
            cout << r + 1 << " " << c + 1 << endl;
        }
    }

    return 0;
}
