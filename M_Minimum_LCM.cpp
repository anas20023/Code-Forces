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
#include <cmath>
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
bool Prime(ll a)
{
    for (int i = 2; i <= sqrtl(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
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
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else if (Prime(n))
        {
            cout << 1 << " " << n - 1 << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 3; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    int tmp = n / i;
                    ans = max(tmp, ans);
                }
            }

            // cout << ans << endl;
            cout << ans << " " << n - ans << endl;
        }
    }

    return 0;
}
