#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;cin>>n;
    vector<int>v(n),ans;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    // ll cnt=0;
    multiset<int>m;
    for (int i = 0; i < n; i++)
    {
       if(m.upper_bound(v[i])!= m.end()){
            m.erase(m.upper_bound(v[i]));
       }
       m.insert(v[i]);
    }
    cout<<m.size()<<endl;
    
    
    return 0;
}