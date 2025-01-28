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
int N = 2e5 + 10;
vector<bool> primearr(N, 1);
void seive()
{
    primearr[0] = primearr[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (primearr[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
            {
                primearr[j] = false;
            }
        }
    }
}
int main()
{
    Fast_io();
    seive();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (primearr[i])
            cout << i << " ";
    }

    return 0;
}