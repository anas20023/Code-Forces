#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;cin>>n>>x;
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
    //for(auto i:pref) cout<<i<<" ";
    int cnt=1,sum=pref[0];
    for (int i = 1; i < n; i++)
    {
        if(sum+v[i]>x){
            cnt++;
            sum=v[i];
        }else{
            sum+=v[i];
        }
    }
    cout<<cnt<<endl;
    
    
    
    return 0;
}