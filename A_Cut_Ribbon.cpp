////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    if (b + c == n)
    {
        cout << 2 << endl;
    }
    else if (a + c == n)
    {
        cout << 2 << endl;
    }
    else if (a + b + c == n)
    {
        cout << 3 << endl;
    }
    else if (a == n)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}