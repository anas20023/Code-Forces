#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin>>t;
    int c=0;
    while(t--){
        ll n,q;cin>>n>>q;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<++c<<":"<<endl;
        while(q--){
            ll l,r;cin>>l>>r;
            auto rit=upper_bound(v.begin(),v.end(),r)-v.begin();
            auto lit=lower_bound(v.begin(),v.end(),l)-v.begin();
            cout<<rit-lit<<endl;
        }
        
    }
    return 0;
}