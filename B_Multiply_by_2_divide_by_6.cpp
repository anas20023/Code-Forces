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
        ll num, cnt = 0;
        cin >> num;
        while (num % 3 == 0)
        {
            if (num % 6 != 0)
            {
                num *= 2;
            }
            else
            {
                num /= 6;
            }
            cnt++;
        }
        if (num != 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }

    return 0;
}
