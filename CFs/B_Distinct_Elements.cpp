#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;cin>>n;
    vector<ll>b(n),c(n),a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    c[0]=b[0];
    for (int i =1; i <n; i++)
    {
        c[i]=b[i]-b[i-1];
    }
    ll tm=1;
    for (int i = 0; i < n; i++)
    {
        ll x = i+1- c[i]; 

        if (x <= 0 || x > i) {
            a[i] = tm;
            tm++;
        } else {
            a[i] = a[x - 1]; 
        }
    }
    
   for(auto i:a) cout<<i<<" ";
    cout<<endl;
 
}
int main()
{
    int t;cin>>t;
    while(t--){
      solve();  
    }
    return 0;
}