#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,s;cin>>n>>s;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    } 
    ll r=0,ans=0;
    multiset<ll>st;
    for (ll l = 0; l < n; l++)
    {
        while(r<n){
            st.insert(v[r]);
            ll temp=*(--st.end());
            ll temp2=*(st.begin());
            ll d=temp-temp2;
            if(d>s){
                st.erase(st.find(v[r]));
                break;
            }
            r++;
        }
        ans+=r-l;
        st.erase(st.find(v[l]));
    }
    cout<<ans<<endl;
      
    return 0;
}