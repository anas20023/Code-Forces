#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        n*=2;s+=s;
        int ans=0,cur=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1') cur=0;
            else cur++;
            ans=max(ans,cur);
        }
        cout<<ans<<endl;
    }
    return 0;
}