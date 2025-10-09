#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=n-1,ans=0;
    while(v[l]<=k){
       // cout<<l<<" ";
        l++,ans++;
    }
    while(v[r]<=k && l<r){
        r--,ans++;
    }    
    cout<<ans<<endl;
    
    
    return 0;
}