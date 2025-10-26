#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,s;cin>>n>>s;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll ans=LLONG_MAX,sum=0,r=0,cnt=0;
    // for (ll l = 0; l < n; l++)
    // {
    //     // ll r=l;
    //     while(r<n && v[r]+sum<s){
    //         sum+=v[r];
    //         r++;
    //     }
    //     ans=max(ans,n-r);
    //    // cnt+=r-l;
    //    // cnt+=n-r;
    //     sum-=v[l];
    // }
    // cout<<ans<<endl;
    for (ll l = 0; l < n; l++) {
        while (r < n && sum < s) {
            sum += v[r];
            r++;
        }
        if (sum >= s) {
            ans = min(ans, r - l);
        }
        sum -= v[l];
    }

    if (ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;
    
    
    return 0;
}