#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n),x(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        x=v;
        sort(x.begin(),x.end());
        int ans=0;
        vector<pair<pair<int,int>,int>>vp;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==x[i]) continue;
            int idx=-1;
            for (int j = i; j < n; j++)
            {
                if(v[j]==x[i]){
                    idx=j;
                    break;
                }
            }
            rotate(v.begin()+i,v.begin()+idx,v.begin()+idx+1);
            vp.push_back({{i+1,idx+1},idx-i});
            
        }
        cout<<vp.size()<<endl;
        for (int i = 0; i < vp.size(); i++)
        {
            cout<<vp[i].first.first<<" "<<vp[i].first.second<<" "<<vp[i].second<<endl;
        }
        
        
        
    }   
    return 0;
}