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
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <deque>
#include <list>
#include <limits.h>
#define ll long long
#define endl "\n"
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void  solve() {ll a, b, n, l;
        cin >> a >> b >> n >> l;
        if ((n * a) + b < l)
        {
            cout << "NO\n";
            return;
        }
        ll ck = l / n;
        if ((ck * n) + b < l)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";}
int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
