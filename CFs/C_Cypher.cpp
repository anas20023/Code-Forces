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
        ll n, ii = 0;
        cin >> n;
        vector<ll> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        while (n--)
        {
            ll q;
            cin >> q;
            string qn;
            cin >> qn;
            for (int i = 0; i < q; i++)
            {
                if (qn[i] == 'D')
                {
                    if (c[ii] == 9)
                    {
                        c[ii] = 0;
                    }
                    else
                    {
                        c[ii]++;
                    }
                }
                else
                {
                    if (c[ii] == 0)
                    {
                        c[ii] = 9;
                    }
                    else
                    {
                        c[ii]--;
                    }
                }
            }
            ii++;
        }
        for (auto i : c)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
