#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int ans=0;
    // for (int i = 0; i < n; i++)
    // {
        
    // }
    int l=0,r=n-1;
    while (l<=r)
    {
        if(v[l]+v[r]<=x){
            l++,r--;
            ans++;
        }
        else if(v[l]+v[r]>x){
            l++;
            ans++;
        }
    }
    
    cout<<ans<<endl;
    //for(auto i:st) cout<<i<<" ";
    return 0;
}