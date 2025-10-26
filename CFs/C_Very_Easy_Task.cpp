#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool isOK(ll n, ll m, ll x, ll y){
    if(x>y){
        swap(x,y);
    }
    ll tm;
    if(x<=m){
        tm=1;
        m-=x;
        tm+=(m/x);
        tm+=(m/y);
    }
    return tm>=n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x,y;cin>>n>>x>>y;
    if(n==1){
        cout<<min(x,y)<<endl;
        return 0;
    }
    ll l=1,r=2e9,ans=0;
    while (l<=r)
    {
        ll m=l+(r-l)/2;
      //  cout<<m<<endl;
        if(isOK(n,m,x,y)){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}