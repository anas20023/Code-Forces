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
bool check_Sq(ll n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    ll l = 1, r = sqrtl(n);
    while (l <= r)
    {
        ll mid_nm = (l + r) / 2;
        ll sq_nm = mid_nm * mid_nm;
        if (sq_nm == n)
        {
            return true;
        }
        else if (sq_nm < n)
        {
            l = mid_nm + 1;
        }
        else
        {
            r = mid_nm - 1;
        }
    }
    return false;
}
int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll s, sum = 0;
        cin >> s;
        vector<ll> a(s);
        for (int i = 0; i < s; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        // cout << sum << endl;
        // cout << check_Sq(sum) << endl;
        (check_Sq(sum)) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
