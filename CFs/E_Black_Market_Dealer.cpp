#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;cin>>n>>k;
    vector<ll>buy(n),sell(n);
    for (int i = 0; i < n; i++)
    {
        cin>>buy[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>sell[i];
    }
    vector<ll>brought(n);
    ll bp=0;
    for (int i = 0; i < n; i++)
    {
        brought[i]=sell[i]-buy[i];
    }
    sort(brought.rbegin(), brought.rend());
    for (int i = 0; i < k; i++)
    {
       bp+=brought[i];
    }
    cout<<bp<<endl;
    
    
    
    return 0;
}