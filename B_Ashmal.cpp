#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string>vs(n);
        for (int i = 0; i < n; i++)
        {
            cin>>vs[i];
        }
        string ans="";
        //sort(vs.begin(),vs.end());
        ans+=vs[0];
        for (int i = 1; i < n; i++)
        {
            // cout<<vs[i];
            if(ans+vs[i]<vs[i]+ans){
                ans+=vs[i];
            }else{
                string tm=vs[i]+ans;
                ans=tm;
            }
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}