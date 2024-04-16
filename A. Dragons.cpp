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

int main()
{
    Fast_io();
    bool ck = true;
    ll s, n;
    cin >> s >> n;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        if (x > s)
        {
            // cout << "NO" << endl;
            // return 0;
            ck = false;
        }
        else
        {
            s += y;
            ck = true;
        }
    }
    (ck) ? cout << "YES\n" : cout << "NO\n";
    // cout << "YES" << endl;

    return 0;
}
