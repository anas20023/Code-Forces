#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<ll>v(n),x(m);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>x[i];
        }
        sort(v.rbegin(),v.rend());
        sort(x.begin(),x.end());
        // for(auto i:v) cout<<i<<" ";
        // cout<<endl;
        // for(auto i:x) cout<<i<<" ";
        // cout<<endl;
        for (int i = 1; i < m; i++)
        {
            x[i]+=x[i-1];
        }
        
        for (int i = 0; i < m; i++)
        {
           if(x[i]-1<n && x[i]-1>=0){
            v[x[i]-1]=0;
           }
        }
        for (int i = 1; i < n; i++)
        {
            v[i]+=v[i-1];
        }
        // for(auto i:v) cout<<i<<" ";
        // cout<<endl;
        cout<<v[n-1]<<endl;
    }
    return 0;
}