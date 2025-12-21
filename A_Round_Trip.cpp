#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;cin>>t;
    while(t--){
        ll R,X,D,n;cin>>R>>X>>D>>n;
        string s;cin>>s;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                ans++;
                R+=D;
            }
            else{
                if(R>X){
                    R+=D;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}