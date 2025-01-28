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
    ll n, m, least_val = INTMAX_MAX;
    cin >> n >> m;
    vector<ll> x;
    for (int i = 0; i < m; i++)
    {
        ll temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    // 5 7 10 10 12 22
    for (int i = 0; i <= m - n; i++)
    {
        least_val = min(least_val, x[i + n - 1] - x[i]);
    }
    cout << least_val << endl;
    return 0;
}
