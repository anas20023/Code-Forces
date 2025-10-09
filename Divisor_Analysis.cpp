#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
ll pw(ll base , ll ex){
    ll r=1;
    base%=MOD;
    while(ex>0){
        if(ex&1) r=(r*base)%MOD;
        base=(base*base)%MOD;
        ex>>=1;
    }
    return r;
}
int main()
{
    ll n;cin>>n;
    ll d=1;
    for (int i = 0; i < n; i++)
    {
        ll x,k;cin>>x>>k;
        d*=pw(x,k)%MOD;
    }
    //cout<<d<<endl;
    ll dv=0,s=0,m=1;
    for (int i = 1; i*i <=d; i++)
    {
        if(d%i==0 && i!=sqrt(d)){
            dv+=2;
            s+=i;
            s+=d/i;
            m=(m*i)%MOD;
            m=(m*(d/i))%MOD;
        }
    }
    cout<<dv<<" "<<s<<" "<<m<<endl;
    
    return 0;
}
