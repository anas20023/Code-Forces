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
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, step = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            // for (int i = 2, int j = 1; a == b; i += 2, j += 2)
            // {
            // }
            ll dif = a - b;
            if (dif % 2 == 0)
            {
                step = 1;
            }
            else
            {
                step = 2;
            }
            cout << step << endl;
        }
        else if (a < b)
        {
            // for (int i = 2, int j = 1; a == b; i += 2, j += 2)
            // {
            // }
            ll dif = b - a;
            if (dif % 2 == 0)
            {
                step = 2;
            }
            else
            {
                step = 1;
            }
            cout << step << endl;
        }
    }

    return 0;
}
