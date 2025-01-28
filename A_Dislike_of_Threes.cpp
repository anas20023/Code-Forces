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

    vector<int> vc;
    vc.push_back(1);
    vc.push_back(2);
    for (int i = 3; i < 1e6 + 100; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        vc.push_back(i);
    }
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll x;
        cin >> x;
        cout << vc[x - 1] << endl;
    }

    return 0;
}
