#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        // if(n==1){
        //     cout<<0<<endl;
        //     continue;
        // }
       // cout<<n<<endl;
        ll ans=n;
        for (int i = 2; i*i <=n; i++)
        {
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                ans-=ans/i;
            }
        }
        if(n>1) ans-=ans/n;
        cout<<ans<<endl;
        
    }
        
    return 0;
}