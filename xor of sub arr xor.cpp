#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if((i*(n-i+1))%2==1){
            ans^=v[i];
        }
    }
    cout<<ans<<endl;
    
    
    return 0;
}