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
    ll x, min_i = 0, max_i = 0;
    cin >> x;
    vector<ll> p(x);
    for (ll i = 0; i < x; i++)
    {
        cin >> p[i];
    }
    ll mn_num = p[0];
    ll mx_num = p[0];
    for (ll i = 0; i < x; i++)
    {
        if (p[i] <= mn_num)
        {
            mn_num = p[i];
            min_i = i;
        }
        if (p[i] > mx_num)
        {
            mx_num = p[i];
            max_i = i;
        }
    }
    cout << mn_num << endl;
    cout << min_i << endl;
    cout << max_i << endl;
    cout << max_i << endl;
    return 0;
}
