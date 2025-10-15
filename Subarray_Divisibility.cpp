#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    vector<int>v(n+1),pref(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    pref[0]=0;
    for (int i = 1; i <=n; i++)
    {
        pref[i]=pref[i-1]+v[i];
        pref[i]%=n;
        pref[i]=(pref[i]+n)%n;
    }
   // for(auto i:pref) cout<<i<<" ";
    ll ans=0;
    map<int,int>mp;
    mp[pref[0]]++;
    for (int i = 1; i <=n; i++)
    {
        ans+=mp[pref[i]];
        mp[pref[i]]++;
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}