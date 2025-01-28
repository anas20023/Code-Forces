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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    if (ans % 100 < 10)
    {
        cout << 0 << ans % 100 << endl;
    }
    else
    {
        cout << ans % 100 << endl;
    }
    return 0;
}
