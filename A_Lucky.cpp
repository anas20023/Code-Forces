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
        string a, b;
        cin >> a;
        b = a;
        reverse(b.begin(), b.end());
        ll sum_1 = 0, sum_2 = 0;
        for (int i = 5; i >= 3; i--)
        {
            sum_1 += int(a[i] - '0');
            sum_2 += int(b[i] - '0');
        }
        (sum_1 == sum_2) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
