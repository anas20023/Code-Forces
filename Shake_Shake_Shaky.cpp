#include <bits/stdc++.h>
using namespace std;
#define ll long long



bool isOK(vector<ll>&v, ll mid, ll n, ll k){
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        cnt+=v[i]/mid;
    }
    return cnt>=k;
    
}
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll l=1,r=1000000000,ans=0;
        while(l<=r){
            ll mid=l+(r-l)/2;
            //cout<<mid<<endl;
            if(isOK(v,mid,n,k)){
                ans=mid;
                l=mid+1;

            }else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}