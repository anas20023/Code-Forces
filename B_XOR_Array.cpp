#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,l,r;cin>>n>>l>>r;
    vector<int>ans(n+1,0);
    for (int i = l; i <=r; i++)
    {
        ans[i]=n;
    }
    
    for (int i = 1; i <l; i++)
    {
       if(i&1) ans[i]=2*n;
       //else ans[i]=n;
    }
    int tm=0;
    //for(auto i:ans) cout<<i<<" ";
    for (int i = 1; i <=n; i++)
    {
         cout<<ans[i]<<" ";
       // tm^=ans[i];
        
    }
   // cout<<tm<<endl;
    cout<<endl;
    
}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}