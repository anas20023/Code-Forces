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
        ll x, s1 = 0, s2 = 0;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < x; i++)
        {
            if (v[i] % 2 == 0)
            {
                s1 += v[i];
            }
            else
            {
                s2 += v[i];
            }
        }
        if (s1 > s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
