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
#define Qtpie 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int pf(int n)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    Fast_io();
    ll n;
    while (cin >> n && n > 0)
    {
        cout << n << " : " << pf(n) << endl;
    }

    return 0;
}
