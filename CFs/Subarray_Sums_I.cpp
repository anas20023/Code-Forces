#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int tms=0,ans=0;
    map<int,int>mp;
    mp[0]=1;
    for (int i = 0; i < n; i++)
    {
        tms+=v[i];
        if(mp[tm]!=mp.end()){
            ans+=(mp[tm]-x);
        }
        mp[tms]++;
    }
    
    cout<<ans<<endl;
    
    
    return 0;
}