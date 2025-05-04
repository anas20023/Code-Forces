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
    list<ll> t;
    for (int i = 0; i < a; i++)
    {
        ll tm;
        cin >> tm;
        t.push_back(tm);
    }
    ll s = 0, d = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            s += max(t.front(), t.back());
            if (max(t.front(), t.back()) == t.front())
            {
                t.pop_front();
            }
            else
            {
                t.pop_back();
            }
        }
        else
        {
            d += max(t.front(), t.back());
            if (max(t.front(), t.back()) == t.front())
            {
                t.pop_front();
            }
            else
            {
                t.pop_back();
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}