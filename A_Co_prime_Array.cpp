#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n),x;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        x.push_back(v[i]);
        if(__gcd(v[i],v[i+1])>1 && i+1<n) x.push_back(1);
       
    }
    cout<<x.size()-n<<endl;
    for(auto i:x) cout<<i<<" ";
    
    
    return 0;
}