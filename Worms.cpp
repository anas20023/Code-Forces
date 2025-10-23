#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n),pref(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    pref[0]=v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i]=pref[i-1]+v[i];
    }
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        auto it=lower_bound(pref.begin(),pref.end(),x)-pref.begin();
        
    //     if(it<n) {
    //         cout<<it+1<<endl;
    //     }
    //    else{
    // } 
    cout<<it+1<<endl;
    }
    //for(auto i:pref) cout<<i<<endl;
    
    return 0;
}