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
        bool isok=true;
        int mn=v[0];
        for (int i = 1; i < n; i++)
        {
            if(v[i]!=v[0]){
                isok=false;
                break;
            }
            mn=min(mn,v[i]);
        }
        //cout<<mn<<endl;
        if(isok){
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            ans=__gcd(ans,abs(v[i]-mn));
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}