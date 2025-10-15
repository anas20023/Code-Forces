#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    vector<pair<int,int>>vp(n);
    for (int i = 0; i < n; i++)
    {
        int x,y;cin>>x>>y;
        vp[i]={x,y};
    }
    sort(vp.begin(),vp.end());
    ll ans=0,cur=0;
    for(auto &[f,s]:vp){
        cur+=f;
        ans+=s-cur;

    }
    cout<<ans<<endl;
    
    return 0;
}