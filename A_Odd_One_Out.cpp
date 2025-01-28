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
        int a,b,c;
        cin>>a>>b>>c;
        map<int , int> mp;
        mp[a]++;mp[b]++;mp[c]++;
        for (auto i :mp)
        {
            if(i.second==1)
            {
                cout<<i.first<<endl;
            }
        }
        
    }

    return 0;
}
