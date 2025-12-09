#include <bits/stdc++.h>
using namespace std;



void solve(){
        int n,q;cin>>n>>q;
        string s;cin>>s;
        int a=0,b=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A') a++;
            if(s[i]=='B') b++;
        }
        while(q--){
            int x;cin>>x;
            if(b==0){
                cout<<x<<endl;
                // continue;
            }else{
                int ans=0;
                while(x>0){
                    for (int i = 0; i < n; i++)
                    {
                        if(x==0) break;
                        if(s[i]=='A') x--;
                        else x/=2;
                        ans++;
                    }
                    
                }
                cout<<ans<<endl;
            }
        }
        

}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}