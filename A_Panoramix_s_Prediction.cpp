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
bool isprime(int x)
{
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    Fast_io();
    int x, y, temp;
    cin >> x >> y;
    for (int i = x + 1; i <= y; i++)
    {
        // cout << "OK\n";
        if (isprime(i))
        {
            temp = i;
            break;
        }
    }
    if (temp == y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}