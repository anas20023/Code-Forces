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
    ll n, q, max_sum = 0;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> b(2e5 + 100);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        b[l - 1]++;
        b[r]--;
    }
    for (int i = 1; i < n; i++)
    {
        b[i] += b[i - 1];
    }
    sort(b.rbegin(), b.rend());
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " " << b[i] << endl;
        max_sum += a[i] * b[i];
    }
    cout << max_sum << endl;
    return 0;
}
