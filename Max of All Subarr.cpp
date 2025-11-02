#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    multiset<int>st;
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
        if(i+1>=k){
            cout<<*st.rbegin()<<endl;
            st.erase(st.find(v[i-k+1]));
        }
    }
    
    
    return 0;
}