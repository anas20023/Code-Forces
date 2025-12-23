#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int>a(n),b(m),c(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<m;i++) cin>>c[i];
        vector<pair<int,int>>vp(m);        
        multiset<int>ms;
        for (int i = 0; i < n; i++)
        {
            ms.insert(a[i]);
        }
        
        for (int i = 0; i < m; i++)
        {
            vp[i]={b[i],c[i]};
        }
        sort(vp.begin(),vp.end());
        int ans=0;
        for (int i = 0; i < m; i++)
        {
            if(vp[i].second==0) continue;
            auto it= ms.lower_bound(vp[i].first);
            if(it==ms.end()) break;
            int val=*it;
            ms.erase(it);
            ms.insert(max(val,vp[i].second));
            ans++;

        }
        for (int i = 0; i < m; i++)
        {
            if(vp[i].second) continue;
            auto it= ms.lower_bound(vp[i].first);
            if(it==ms.end()) break;
            int val=*it;
            ms.erase(it);
            //ms.insert(max(val,vp[i].second));
            ans++;

        }
        cout<<ans<<endl;
        
       
    }
    return 0;
}