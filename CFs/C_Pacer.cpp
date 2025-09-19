#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--){
        // cout<<"Working"<<endl;
        ll n,m;cin>>n>>m;
        vector<pair<ll,ll>>vp(n);
        for (int i = 0; i < n; i++)
        {
            ll x,y;cin>>x>>y;
            vp[i]={x,y};
        }
        for(auto &[f,s]:vp){
            //cout<<f<<" "<<s<<endl;
        }
        ll ans=0;
        ll pt=0;
        int ps=0;
        for(auto &[f,s]:vp){
            ll d=f-pt;
            /////////cout<<d<<endl;
            int p=ps^s;
            ll add=d;
            if((d%2)!=p) {
                add=d-1;
            }
            if(add<0) {
                add=0;
            }
            ans+=add;
          //  dbg(ans);
            pt=f;
            ps=s;
        }
        if(m>pt) ans+=(m-pt);
        cout<<ans<<endl;
    }
    return 0;
}