#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

    int n;cin>>n;
        vector<ll>v(n);
        int e=0,o=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0) e++;
            else o++;
        }
        if(n==e || n==o){
            for(auto i:v) cout<<i<<" ";
            cout<<endl;
            return;
        }
        sort(v.begin(),v.end());
         for(auto i:v) cout<<i<<" ";
        cout<<endl;
            // return;
}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();

        
        
    }
    return 0;
}