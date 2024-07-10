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

int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll s,eat=0;cin>>s;
        vector<ll>box(s);
        for(int i=0;i<s;i++)cin>>box[i];
        sort(box.begin(),box.end());
        for(int i=0;i<s;i++)
        {
            eat+=box[i]-box[0];
        }
        cout<<eat<<endl;
    }

    return 0;
}
