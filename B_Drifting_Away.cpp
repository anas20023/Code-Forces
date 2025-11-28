#include <bits/stdc++.h>
using namespace std;


void solve(){
     string s;cin>>s;
        int n=s.size();
        int l=0,r=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='<') l++;
            if(s[i]=='>') r++;
            
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]!='<' && s[i+1]!='>') {
                cout<<-1<<endl;
                return;
            }
        }
        cout<<n-min(l,r)<<endl;
        // if(s.find("><")!=string::npos){
        //     cout<<-1<<endl;
        //     // return;
        // }else{
        // }
}
int main()
{
    int t;cin>>t;
    while(t--){
       solve();
    }
    return 0;
}