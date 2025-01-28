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
    // int tc = 1;
    // cin >> tc;
    // while (tc--)
    // {
    // }
    int n;cin>>n;
    map<int,int>mp;
    for (int i = 0; i < n; ++i)
    {
        int tmp;cin>>tmp;
        mp[tmp]++;
    }
    int ans=0;
    for (auto i:mp)
    {
        //ans=max(ans,abs(i.first-i.second));
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second>i.first)
        {
            ans+=i.second-i.first; 
        }
        else if(i.second<i.first)
        {
            ans+=i.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}
