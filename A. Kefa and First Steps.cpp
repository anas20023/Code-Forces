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
#include <utility>
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll track = a[0];
    ll cnt = 1, dnt = 1;
    for (int i = 1; i < n; i++)
    {
        ll temp = a[i];
        if (temp >= track)
        {
            dnt++;
        }
        else
        {
            dnt = 1;
        }
        track = temp;
        cnt = max(cnt, dnt);
    }
    cout << cnt << endl;

    return 0;
}
