////////////////              ANAS IBN BELAL            /////////////////
//                          Template   Code                           ||
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
    int tc = 1;
    cin >> tc;
    map<int,int>mp;
    for (int i = 0; i < tc; ++i)
    {
        int a,b;cin>>a>>b;
        mp[a]=b;
    }
    int sum_price=0,sum_quality=0;
    for(auto i:mp)
     {  // cout<<i.first<<" "<<i.second<<endl;
        sum_price+=i.first;
        sum_quality+=i.second;
    }
    //cout<<sum_price<<" "<<sum_quality<<endl;
    if(sum_price==sum_quality)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
