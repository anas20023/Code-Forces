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
        ll s;
        cin >> s;
        set<ll> st;
        for (int i = 0; i < s; i++)
        {
            ll temp;
            cin >> temp;
            st.insert(temp);
        }
        // sort(a.rbegin(), a.rend());
        // for (auto i : st)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        if (st.size() == 1)
        {
            cout << "YES\n";
        }
        else
        {
            vector<ll> a;
            bool flag = true;
            for (auto i : st)
            {
                // cout << i << " ";
                a.push_back(i);
            }
            for (int i = 0; i < a.size() - 1; i++)
            {
                if (a[i + 1] - a[i] != 1)
                {
                    flag = false;
                    break;
                }
                else
                {
                    flag = true;
                }
            }
            // cout << endl;
            if (!flag)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
