////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
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
    /// Sieve of Eratosthenes for Prime number array
    vector<int> a(1e6);
    a[0] = a[1] = 0;
    for (int i = 2; i * i <= 1e6; ++i)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                a[j] = 1;
            }
        }
    }

    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll num;
        cin >> num;
        ll temp = sqrtl(num);
        if (num == 1)
            cout << "NO" << endl;
        else if (num ==)
    }

    return 0;
}
