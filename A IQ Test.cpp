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
    int x, count = 0, sum = 0, idx_1, idx_2;
    cin >> x;
    vector<ll> a(x);
    for (int i = 1; i <= x; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            count++;
            idx_1 = i;
        }
        else
        {
            sum++;
            idx_2 = i;
        }
    }
    (count < sum) ? cout << idx_1 << endl : cout << idx_2 << endl;

    return 0;
}
