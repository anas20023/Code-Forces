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
    ll s;
    cin >> s;
    vector<ll> a(s);
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll max_val = a[s - 1];
    ll sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += max_val - a[i];
    }
    cout << sum << endl;

    return 0;
}