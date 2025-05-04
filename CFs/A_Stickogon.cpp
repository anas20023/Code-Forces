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

int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, total_side = 0;
        cin >> n;
        map<ll, ll> track;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            track[temp]++;
        }
        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }
        for (auto i : track)
        {
            if (i.second >= 3)
                // total_side++;
                total_side += i.second / 3;
            else
                total_side += 0;
        }
        cout << total_side << endl;
    }

    return 0;
}
