#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        multiset<ll>st;
        st.insert(0);
        ll df=0;
        bool ch=false;
        for (int i = 0; i < n; i++)
        {
            if((i+1)&1){
                df+=v[i];
            }
            else{
                df-=v[i];
            }
            if(st.find(df)!=st.end()){
                ch=true;
                break;

            }
            else{
                st.insert(df);
            }
        }
        if(ch) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}