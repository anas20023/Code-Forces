#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int l,a,b;cin>>l>>a>>b;
        int ans=0;
        for (int i = 1; i <=l; i++)
        {
            int clc=a+(i*b);
            ans=max(ans,clc%l);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}