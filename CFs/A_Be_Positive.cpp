#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,a=0,b=0;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]==-1) a++;
            if(v[i]==0) b++;
        }
        int ans=b;
        if(a%2==1){
            ans+=2;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}