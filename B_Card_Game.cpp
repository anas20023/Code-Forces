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
bool check(int a, int b, int c, int d)
{
    int wina = 0, winb = 0;
    if (a > c)
    {
        wina++;
    }
    if (c > a)
    {
        winb++;
    }
    if (d > b)
    {
        winb++;
    }
    if (b > d)
    {
        wina++;
    }
    return wina > winb;
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
        win += check(a, aa, b, bb);
        win += check(a, aa, bb, b);
        win += check(a, aa, bb, b);
        win += check(aa, a, bb, b);
        cout << win << endl;
    }
    return 0;
}
