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
        if(v[0]==-1) v[0]=v[n-1];
        if(v[n-1]==-1) v[n-1]=v[0];
        int s=abs(v[n-1]-v[0]);
        cout<<s<<endl;
        for (int i = 0; i < n; i++)
        {
            if(v[i]<0) v[i]=0;
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}