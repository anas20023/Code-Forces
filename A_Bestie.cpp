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
        vector<int> v(x + 10);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        int cost = 0;
        for (int i = 0; i < x; i++)
        {
            if (v[i] != 1)
            {
                v[i] = __gcd(v[i], i);
                cost += x - i + 1;
            }
        }
        cout << cost << endl;
    }

    return 0;
}
