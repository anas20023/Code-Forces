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
#define Qtpie 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int find_best_x(int n)
{
    int max_sum = 0;
    int best_x = 2;
    for (int x = 2; x <= n; ++x)
    {
        int k = n / x;
        int current_sum = x * k * (k + 1) / 2;
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            best_x = x;
        }
    }
    return best_x;
}
int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        cout << find_best_x(n) << endl;
    }

    return 0;
}
