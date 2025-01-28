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
        ll n;
        cin >> n;
        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll s1 = 0, s2 = 0;
            vector<ll> v;
            for (int i = 1; i <= n; i += 2)
            {
                s2 += i;
                v.push_back(i);
            }

            for (int i = 2; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i << " ";
                    s1 += i;
                }
            }
            ll dif = abs(s1 - s2);
            v.back() += dif;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            // cout << dif << endl;
        }
    }

    return 0;
}
