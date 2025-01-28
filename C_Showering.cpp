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
        ll n, s, d,cnt=0;
        bool flag = false;
        cin >> n >> s >> d;
        while (n--)
        {
            ll x, y;
            cin >> x >> y;
            if(x-cnt >=s)
                flag=true;
               else
                cnt=y;
 
        }
        if(d-cnt>=s || flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
      
    }

    return 0;
}