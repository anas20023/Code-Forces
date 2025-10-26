#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
vector<ll>v;
bool isOK(ll mid){
    for (int i = 0; i < n; i++)
    {
        if(v[i]>mid) return false;
    }
    
    ll cnt=1,s=v[0];
    for (int i = 1; i < n; i++)
    {
        if(s+v[i]>mid){
            cnt++;
            s=v[i];
        }else{
            s+=v[i];
        }
    }
    return cnt<=k;
    
}
int main()
{
    cin>>n>>k;
    v.resize(n);
    ll r=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        r+=v[i];
    }
    ll mn=*max_element(v.begin(),v.end());
    ll l=mn,ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
       // cout<<mid<<endl;
        if(isOK(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}