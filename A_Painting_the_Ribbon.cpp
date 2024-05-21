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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> vc(n);
        for (int i = 0, j = 1; i < n; i++, j++)
        {
            if (j > m)
            {
                j = 1;
            }
            vc[i] = j;
        }
        if (k == m)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool check = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j <= m; i++)
                {
                    if (vc[i] != vc[j])
                    {
                        check = true;
                        break;
                    }
                }
            }
            (!check) ? cout << "NO" << endl : cout << "YES" << endl;
        }
        // cout << endl;
    }

    return 0;
}
