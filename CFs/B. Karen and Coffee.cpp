////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          llAKE 52                                 ||
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
    vector<ll> sum_1(2e5 + 100, 0);
    vector<ll> sum_2(2e5 + 100, 0);
    ll n, k, q;
    cin >> n >> k >> q;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        sum_1[l]++;
        sum_1[r + 1]--;
    }
    for (ll i = 1; i < sum_1.size(); i++)
    {
        sum_1[i] += sum_1[i - 1];
    }
    // for (auto i : sum_1)
    // {
    //     if (i > 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    for (ll i = 0; i < sum_1.size(); i++)
    {
        if (sum_1[i] >= k)
        {
            sum_2[i] = 1;
        }
        else
        {
            sum_2[i] = 0;
        }
    }
    for (ll i = 1; i < sum_2.size(); i++)
    {
        sum_2[i] += sum_2[i - 1];
    }
    // for (auto i : sum_2)
    // {
    //     cerr << i << endl;
    // }

    while (q--)
    {
        ll ql, qr;
        cin >> ql >> qr;
        cout << sum_2[qr] - sum_2[ql - 1] << endl;
    }

    return 0;
}
