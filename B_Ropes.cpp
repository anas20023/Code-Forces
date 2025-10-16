#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isOK(vector<ll>&v,double m,ll n, ll s){
    ll res=0;
    for (int i = 0; i < n; i++)
    {
        //cout<<v[i]<<" ";
        res+=(v[i]/m);
    }
    //cout<<endl;
    return res>=s;

}
int main()
{
    ll n,s;cin>>n>>s;
    vector<ll>v(n);
    ll mx=LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
        //cout<<v[i]<<" ";
    }
     double l=0,r=mx,ans=0;
     while(r-l>=1e-7){
        double m= (l+r)/2;
      //cout<<fixed<<setprecision(10)<<m<<endl;
        if(isOK(v,m,n,s)){
            ans=m;
            l=m;
        }
        else{
            r=m;
        }
     }
     cout<<fixed<<setprecision(10)<<ans<<endl;
     
    return 0;
}