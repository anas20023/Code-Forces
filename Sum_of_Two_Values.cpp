#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;cin>>n>>s;
    map<int,int>mp;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(mp.find(s-v[i])!=mp.end()){
            cout<<mp[s-v[i]]+1<<" "<<i+1<<endl;
            return 0;
        }
        mp[v[i]]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
    
    
    return 0;
}