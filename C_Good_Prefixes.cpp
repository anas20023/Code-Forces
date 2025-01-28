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
        ll s, gdarr = 0;
        cin >> s;
        vector<ll> v;
        for (int i = 0; i < s; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll sum = 0, mxel = INT_MIN;
        for (int i = 0; i < s; i++)
        {
            // cout << v[j];
            sum += v[i];
            mxel = max(mxel, v[i]);
            // cout << endl;
            if (sum - mxel == mxel)
            {
                gdarr++;
            }
        }

        cout << gdarr << endl;
    }
    return 0;
}
