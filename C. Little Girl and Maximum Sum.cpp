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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> b(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // sort(a.begin(), a.end());
    for (int i = 2; i <= n; i++)
    {
        a[i] += a[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        b[l]++;
        b[r + 1]--;
    }
    for (int i = 2; i <= n; i++)
    {
        b[i] += b[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
