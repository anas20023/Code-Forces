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
    vector<pair<ll, ll>> vp;
    bool ck = true;
    ll s, n, it = 0;
    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        pair<ll, ll> temp_pair;
        temp_pair.first = a;
        temp_pair.second = b;
        vp.push_back(temp_pair);
    }
    sort(vp.begin(), vp.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << vp[i].first << endl;
    //     cout << vp[i].second << endl;
    // }

    while (n--)
    {
        if (s <= vp[it].first)
        {
            ck = false;
        }
        else
        {
            s += vp[it].second;
            ck = true;
        }
        it++;
    }
    (ck) ? cout << "YES\n" : cout << "NO\n";
    // cout << ck << endl;

    return 0;
}
