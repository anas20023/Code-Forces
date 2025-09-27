#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        int mn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]>=0) mn=min(mn,v[i]);
        }
        //cout<<mn<<endl;
        int ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int tm=abs(mn-v[i]);
            if(tm>0) ans=min(ans,tm);
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}