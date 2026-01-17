#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        // int n;cin>>n;
        // if(n==2){
        //      cout<<2<<endl;
        //      continue;
        // }
        // if(n==3){
        //      cout<<3<<endl;
        //      continue;
        // }
        // if(n%2==0 && n>2){
        //     cout<<0<<endl;
        // }else{
        //     cout<<1<<endl;
        // }

        int s,k,m;cin>>s>>k>>m;
        // int y=m/k;
        // cout<<m%k<<endl;
        int x=(s>k && m>=k)?k:s;
        // else x=s;
        // cout<<m%k<<endl;
        cout<<max(0,x-(m%k))<<endl;
    }
    return 0;
}