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
        ll sz, ct = 0, ctt = 0;
        cin >> sz;
        vector<ll> s;
        for (int i = 0; i < sz; i++)
        {
            ll tmp;
            cin >> tmp;
            s.push_back(tmp);
        }
        for (int i = 0; i < sz; i++)
        {
            ll t1 = i % 2;
            ll t2 = s[i] % 2;
            if (t1 != t2)
            {
                if (t1 == 0)
                {
                    ct++;
                }
                else
                {
                    ctt++;
                }
            }
        }
        if (ct == ctt)
        {
            cout << ctt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
