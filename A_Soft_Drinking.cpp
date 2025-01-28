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
    ll n, k, l, c, d, p, nl, np, needed_drink, needed_limes, needed_salt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    needed_drink = (k * l) / nl;
    needed_limes = c * d;
    needed_salt = p / np;
    ll toasts;
    toasts = min({needed_drink, needed_limes, needed_salt}) / n;
    cout << toasts << endl;

    return 0;
}
