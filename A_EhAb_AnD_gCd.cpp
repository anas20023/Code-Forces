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
        if (x % 2)
        {
            cout << x - 1 << " " << 1 << endl;
        }
        else
        {
            cout << x / 2 << " " << x / 2 << endl;
        }
    }

    return 0;
}
