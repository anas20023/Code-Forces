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
     for (int i = 0; i <n; i++)
     {
        ans+=2*n*v[i];
     }
     
     cout<<ans<<endl;
     
    return 0;
}