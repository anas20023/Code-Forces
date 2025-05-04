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

int main()
{
    Fast_io();
    ll a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    string x;
    cin >> x;
    for (auto i :x)
    {
         if (i == '1')
            sum += a;
        else if (i == '2')
            sum += b;
        else if (i== '3')
            sum += c;
        else if (i == '4')
            sum += d;
    }
    
       
    
    cout << sum << endl;
    return 0;
}