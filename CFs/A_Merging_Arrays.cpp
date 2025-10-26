#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m),ans;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
   // for(auto i:a) cout<<i<<" ";
  //  for(auto i:b) cout<<i<<" ";
    int l=0,r=0;
    while(l<n && r<m){
        if(a[l]<b[r]){
            ans.push_back(a[l]);
            l++;
        }
        else{
            ans.push_back(b[r]);
            r++;
        }
        // l++,r++;
    }
    while(l<n){
        ans.push_back(a[l]);
        l++;
    }
    while(r<m){
        ans.push_back(b[r]);
        r++;
    }
    for(auto i:ans) cout<<i<<" ";
   // cout<<l<<" "<<r<<endl;
    
    
    return 0;
}