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
    string a, b, c, d;
    cin >> a >> b;
    c = a;
    d = b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
   // cout << a << endl;
   // cout << b << endl;
    if (c == a)
    {
        cout << a << endl;
    }
    else if (b == d)
    {
        cout << b << endl;
    }
    else if (a == b)
    {
        cout << max(a, b) << endl;
    }
    return 0;
}
