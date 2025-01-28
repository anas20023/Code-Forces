////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TEcNOLOGY             ||
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
        ll x;
        char c;
        cin >> x >> c;
        string st;
        cin >> st;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ll gf;
            for (int i = 0; i < st.size(); i++)
            {
                if (st[i] == 'g')
                {
                    gf = i + 1;
                    break;
                }
            }
            // cout << gf << endl;
            ll ans=0;
            for (int i = 0; i < x; i++)
            {
                if (st[i] == c)
                {
                    ll count = 0, flag = 0;
                    for (int j = i + 1; j < x; j++)
                    {
                        count++;
                        if (st[j] == 'g')
                        {
                            flag++;
                            break;
                        }
                    }
                    i = i + count;
                    if (flag)
                    {
                        ans = max(ans, count);
                    }
                    else
                    {
                        ans = max(ans, count + gf);
                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
