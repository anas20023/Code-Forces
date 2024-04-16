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
    bool check = false;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            cout << string(m, '#') << endl;
        }
        else if (i / 2 % 2)
        {
            cout << string(m - 1, '.') + "#" << endl;
        }
        else
        {
            cout << "#" + string(m - 1, '.') << endl;
        }
    }

    return 0;
}
