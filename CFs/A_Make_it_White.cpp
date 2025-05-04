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
        int x;
        cin >> x;
        cin.ignore();
        string s;
        cin >> s;
        int st, en;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == 'B')
            {
                st = i + 1;
                break;
            }
        }
        for (int i = 0; i < x; i++)
        {
            if (s[i] == 'B')
            {
                en = i + 1;
            }
        }
        cout << en - st + 1 << endl;
    }

    return 0;
}
