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
        ll x, total_ballons = 0;
        cin >> x;
        cin.ignore();
        vector<char> arr(x);
        set<char> get_un;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (auto i : arr)
        {
            get_un.insert(i);
        }
        total_ballons += get_un.size();
        total_ballons += arr.size();
        cout << total_ballons << endl;
    }

    return 0;
}
