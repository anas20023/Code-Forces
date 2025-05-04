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
bool Isprime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    Fast_io();
    int x;
    cin>>x;
    if(x>=2 &&Isprime(x)==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}