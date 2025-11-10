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
        ans+=pow(2,n-1)*n*v[i];
     }
     
     cout<<ans<<endl;
     
    return 0;
}