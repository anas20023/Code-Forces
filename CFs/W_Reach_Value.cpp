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
int getValue(ll n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    if (n / 20 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    Fast_io();
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << getValue(x) << endl;
        }
    }

    return 0;
}
