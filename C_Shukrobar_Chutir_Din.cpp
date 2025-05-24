#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--){
        ll k,m,n;cin>>k>>m>>n;
        ll d=n/7;
        n-=d;
        ll ans=k*m*n;
        cout<<ans<<endl;
    }
    return 0;
}