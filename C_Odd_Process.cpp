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
        priority_queue<int>e,o;
        for (int i = 0; i < n; i++)
        {
            if(v[i]&1) o.push(v[i]);
            else e.push(v[i]);
        }
        vector<int>ans(n);
        for (int i = 0; i < n; i++)
        {
            if(!o.empty()){
                ans[i]=o.top();
                o.pop();
            }
        }
        
        
        
    }
    return 0;
}