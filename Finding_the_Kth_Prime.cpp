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
const int N = 90000000 + 1;
void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
vector<bool> primenums(N, false);
vector<ll> v;
void SeiveP()
{
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (primenums[i] == false)
        {
            for (int j = i * i; j <= N; j += i)
            {
                primenums[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (primenums[i] == false)
        {
            v.push_back(i);
        }
    }
}
int main()
{
    Fast_io();
    SeiveP();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a;
        cin >> a;
        cout << v[a - 1] << endl;
    }

    return 0;
}
