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
        ll n, s, d;
        bool flag = false;
        cin >> n >> s >> d;
        // cout << "OK" << endl;
        vector<ll> arr(d, 0);
        while (n--)
        {
            ll x, y;
            cin >> x >> y;
            //cout << x << " " << y << endl;
            arr[x]++;
            arr[y]--;
            //cout << "OK" << endl;
        }
        for (int i = 1; i < d; i++)
        {
            arr[i] += arr[i - 1];
        }
        for (int i = 0; i < d; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        // if (flag)
        // {
        //     cout << "YES\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }
    }
    return 0;
}
