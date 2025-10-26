#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n),x;
        ll o=0,s=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]&1) o++,x.push_back(v[i]);
            else s+=v[i];
        }
        if(o==0){
            cout<<0<<endl;
            continue;
        }
       // cout<<mx_o<<endl;
       sort(x.rbegin(),x.rend());
       int y=x.size();
       if(y&1) y=(x.size()/2)+1;
       else y= x.size()/2;
       for (int i = 0; i <y; i++)
       {
          s+=x[i];
       }
       cout<<s<<endl;
     //for(auto i:x) cout<<i<<" ";
    // cout<<endl
       
        
    }
    return 0;
}