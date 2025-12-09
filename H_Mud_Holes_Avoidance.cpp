#include <bits/stdc++.h>
using namespace std;


#define nl '\n'
#define ll long long


void solve() {
    ll n;cin>>n;
    vector<ll>v(n+2);
    ll mx=-1ll;
    for(int i = 1; i <= n; ++i){
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    vector<bool>arr(mx+1,false);
    for (int i = 1; i <= n; i++)
    {
        arr[v[i]]=true;
    }
    // for (auto i = 1; i <=mx; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    for (int i = 2; i <=mx; i++)
    {
        if(arr[i]) continue;
        bool ch=true;
        for(int j = i; j <= mx; j+=i){
            if(arr[j]){
               ch=false;
               break;
            }
        }
        if(ch){
            cout<<i<<endl;
            return;
        }
       
    }
    cout<<mx+1<<endl;
    
    

}

int32_t main() {

	int t = 1; //cin >> t;
	while(t--) {
		
		solve();


	}

}