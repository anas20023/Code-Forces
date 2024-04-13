////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
//                                                                    ||
//                                                                    ||
//           BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY        ||
//                            INTAKE 52                               ||
//                        DEPARTMENT OF CSE                           ||
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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll x, a, b, count = 0;
        cin >> x;
        if (x == 1 || x == 2)
        {
            cout << 0 << endl;
        }
        else
        {
            count = (x - 1) / 2;
            cout << count << endl;
        }
    }

    return 0;
}
