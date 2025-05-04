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
    bool check = false;
    string a, b;
    cin >> a >> b;
    vector<ll> for_a(26, 0);
    vector<ll> for_b(26, 0);
    // for (auto i : for_a)
    // {
    //     cout << i << endl;
    // }
    for (int i = 0; i < a.size(); i++)
    {
        for_a[a[i] - 'a'] = 1;
    }
    for (int i = 0; i < b.size(); i++)
    {
        for_b[b[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (for_a[i] >= 1 && for_b[i] >= 1)
        {
            check = true;
            break;
        }
    }
    (check) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
