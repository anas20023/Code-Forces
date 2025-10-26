#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for (int i = 0; i < k; i++)
    {
        cin>>v[i];
    }

    set<ll>st;
    for (int i = 0; i < k; i++)
    {
        ll x=1;
        while(x<n){
            x+=v[i];
            st.insert(x);
        }
    }
    cout<<st.size()<<endl;
    
    return 0;
}