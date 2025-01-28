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
#define dl double
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
        vector<ll> x_vals, y_vals;
        for (int i = 1; i <= 4; i++)
        {
            ll x, y;
            cin >> x >> y;
            x_vals.push_back(x);
            y_vals.push_back(y);
        }
        sort(x_vals.begin(), x_vals.end());
        sort(y_vals.begin(), y_vals.end());
        cout << abs(x_vals[2] - x_vals[0]) * abs(y_vals[2] - y_vals[0]) << endl;
    }

    return 0;
}
