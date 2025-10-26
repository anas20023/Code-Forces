#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        //cout<<v[i]-i-1<<" ";
        ans=max(ans,abs(v[i]-i-1));
    }
    if(!(n&1)) ans++;
    cout<<ans<<endl;
    
    
    return 0;
}