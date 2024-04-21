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
    ll n, k, sum = 0, temp;
    cin >> n >> k;
    ll remain = 240 - k;
    // cout << remain;
    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;
        if (sum > remain)
        {
            cout << i - 1 << endl;
            return 0;
        }
        else if (sum == remain)
        {
            cout << i << endl;
            return 0;
        }
        temp = i;
    }
    cout << temp << endl;

    return 0;
}
