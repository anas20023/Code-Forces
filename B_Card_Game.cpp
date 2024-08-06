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
        int a, aa, b, bb, win = 0;
        cin >> a >> aa >> b >> bb;
        if (a > b)
        {
            win++;
        }
        if (a > bb)
        {
            win++;
        }
        if (aa > b)
        {
            win++;
        }
        if (aa > bb)
        {
            win++;
        }
        cout << win << endl;
    }
    return 0;
}
