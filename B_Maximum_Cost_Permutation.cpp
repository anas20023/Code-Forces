#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        vector<int>pos0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            v[i]--;
            if(v[i]==-1) pos0.push_back(i);
            else mp[v[i]]=1;
        }
        if(pos0.size()==1){
            for (int i = 0; i < n; i++)
            {
               if(mp[i]==0){
                v[pos0[0]]=i;
               }
            }
            
        }
        int l=0,r=n-1;
        while(l<=n && v[l]==l) l++;
        while(r>=0 && v[r]==r) r--;
        cout<<max(0,r-l+1)<<endl;
    }
    return 0;
}