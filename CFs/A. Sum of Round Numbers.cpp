////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
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
void Run()
{
    ll n;
    cin >> n;
    ll count = 0;
    ll multiplier = 1;
    vector<ll> arr;
    while (n > 0)
    {
        ll curr = n % 10;
        if (curr == 0)
        {
            multiplier *= 10;
        }
        else
        {
            arr.push_back(curr * multiplier);
            count++;
            multiplier *= 10;
        }
        n /= 10;
    }
    cout << count << endl;
    for (ll i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        Run();
    }

    return 0;
}
