#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isOK(vector<ll>&v, ll m,ll n){
    for (ll i = 0; i < n; i+=2)
    {
       if (v[i+1]-v[i]>m) {
           return false;
        }
    }
    return true;
    
}
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll l=0,r=2e9,ans=2e9;
        while (l<=r)
        {
            ll m=(l+r)/2;
            if(isOK(v,m,n)){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}