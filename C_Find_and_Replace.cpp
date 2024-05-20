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
        int c;
        cin >> c;
        string st;
        bool flag = false;
        cin >> st;
        for (int i = 0; i < c; i++)
        {
            if (st[i] == 'a')
            {
                st[i] = '0';
            }
            if (st[i] == 'b' || st[i] == 'c')
            {
                st[i] = '1';
            }
        }
        cout << st << endl;
        if (c == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < c - 1; i++)
            {
                if (st[i] == st[i + 1])
                {
                    flag = true;
                    break;
                }
            }
            // (!flag) ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}
