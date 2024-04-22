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
    ll x, process = 0;
    cin >> x;
    vector<ll> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    ll min = v[0];
    ll max = v[0];
    for (int i = 0; i < x; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            process++;
        }
        if (v[i] < min)
        {
            min = v[i];
            process++;
        }
    }
    cout << process;

    return 0;
}
