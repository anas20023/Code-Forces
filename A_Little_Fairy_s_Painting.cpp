#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
        vector<int>v(n);
        set<int>st;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }
        int x=st.size();
        if(st.find(x) !=st.end()){
            cout<<x<<endl;
            return;
        }
        for(auto it:st){
            if(it>x){
                cout<<it<<endl;
                return;
            }
        }
}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}