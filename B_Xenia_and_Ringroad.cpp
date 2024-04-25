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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll init = 1, total_time = 0;
    for (int i = 0; i < m; i++)
    {
        if (init < a[i])
        {
            total_time += a[i] - init;
            init = a[i];
        }
        if (init > a[i])
        {
            total_time += n + a[i] - init;
            init = a[i];
        }
        if (init == a[i])
        {
            total_time += 0;
        }
    }
    cout << total_time << endl;

    return 0;
}
