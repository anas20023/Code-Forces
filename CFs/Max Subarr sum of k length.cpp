#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int sum=0,ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=v[i];
        if(i+1>=k){
            // cout<<sum<<" ";
            ans=max(ans,sum);
            sum-=v[i-k+1];
        }
    }
    cout<<ans<<endl;
    
    
    return 0;
}