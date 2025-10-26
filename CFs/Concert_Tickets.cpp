#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,c;cin>>n>>c;
    vector<ll>v(n),x(c),ans;
    multiset<ll>ms;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i]; 
        ms.insert(v[i]);
    }
    for (ll i = 0; i < c; i++)
    {
        cin>>x[i];
    }
    for (ll i = 0; i < c; i++)
    {
      auto it= ms.upper_bound(x[i]);
      if(it==ms.begin()){
            ans.push_back(-1);
      }
      else{
        it--;
        ans.push_back(*it);
        ms.erase(it);
      }
    }
   
  for(auto i:ans) cout<<i<<endl;
    return 0;
}