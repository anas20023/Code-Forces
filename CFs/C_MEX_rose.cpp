#include <bits/stdc++.h>
using namespace std;
#define ll long long
// bool isOK(vector<ll>&v, ll m,ll n){
//     for (ll i = 0; i < n; i+=2)
//     {
//        if (v[i+1]-v[i]>m) {
//            return false;
//         }
//     }
//     return true;
    
// }
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vector<ll>v(n);
        map<ll,ll>mp;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll mx=0;
        while(mx<=n && mp[mx]>0){
            mx++;
        }
        if(mx==k){
            cout<<0<<endl;
            continue;
        }
        ll ans=0;
        for (int i = 0; i < k; i++)
        {
            if(mp[i]==0){
                ans++;
            }
        }
        // cout<<ans<<endl;
        cout<<max(ans,mp[k])<<endl;
        
        
    }
    return 0;
}