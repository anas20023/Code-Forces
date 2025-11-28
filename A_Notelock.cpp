#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n,k;cin>>n>>k;
        string s;cin>>s;
        int c=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1') c++;
        }
        if(c==0){
            cout<<0<<endl;
            return;
        }
        int r=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1' && i==0) {
                r++;
                continue;
            }
            if(s[i]=='1'){
                bool found = false;
                for(int j = max(0, i-k+1); j < i; j++){
                    if(s[j]=='1'){
                        found = true;
                        break;
                    }
                }
                if(!found) r++;
            }
        }
        
        cout<<r<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();
        
    }
    return 0;
}