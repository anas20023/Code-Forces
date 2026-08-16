#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--){
        vector<ll>v(3);
        for(int i=0;i<3;i++) cin>>v[i];
        sort(v.begin(),v.end());
       cout<<min(v[2]-v[0],v[1])<<endl;
    }
    return 0;
}