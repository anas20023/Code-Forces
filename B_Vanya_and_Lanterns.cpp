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
    ll x, y;
    cin >> x >> y;
    vector<ll> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // for (auto i : a)
    // {
    //     cout << i << " ";
    // }
    double max_dist = 0.0;
    for (int i = 1; i < x; i++)
    {
        if (a[i] - a[i - 1] > max_dist)
            max_dist = a[i] - a[i - 1];
    }
    ll rtc = max(a[0], y - a[x - 1]);
    //  cout << rtc << endl;
    //  rtc = (double)rtc;
    max_dist /= 2;
    double total = max(max_dist, (double)rtc);
    printf("%.10f\n", total);

    return 0;
}