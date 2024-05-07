////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
//                            Binary Search                           ||
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
int msqrt(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    ll l = 1, r = sqrtl(n);
    while (l <= r)
    {
        ll mid_nm = (l + r) / 2;
        ll sq_nm = mid_nm * mid_nm;
        if (sq_nm == n)
        {
            return mid_nm;
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
    return 0;
}
void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    Fast_io();
    ll a;
    cin >> a;
    cout << 25 << endl;
    // cout << msqrt(a) << endl;
    return 0;
}