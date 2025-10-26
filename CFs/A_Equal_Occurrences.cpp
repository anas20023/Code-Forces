#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n+1,0);
        for (int i = 0; i < n; i++)
        {
            int tm;cin>>tm;
            v[tm]++;
        }
        int ans=INT_MIN;
        for (int i = 1; i <=n; i++)
        {
            int tm=0;
            for(int j = 1; j <= n; ++j){
                if(v[j]>=v[i]){
                    tm+=v[i];
                }
            }
            ans=max(ans,tm);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}