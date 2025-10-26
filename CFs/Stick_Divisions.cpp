#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,k;cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    for (int i = 0; i < k; i++)
    {
        int x;cin>>x;
        pq.push(x);
    }
    ll ans=0;
    while (pq.size()>1)
    {
        ll x=pq.top();
        pq.pop();
        ll y=pq.top();
        pq.pop();
        ans+=x+y;
        pq.push(x+y);
    }
    cout<<ans<<endl;
    
    return 0;
}