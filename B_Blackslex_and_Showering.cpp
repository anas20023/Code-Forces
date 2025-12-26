#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans=INT_MIN;
        for (int i = 0; i < n-2; i++)
        {
            ans=max(ans,abs(v[i]-v[i+1]));
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}