#include <bits/stdc++.h>
using namespace std;


const int N=1e6;
int main()
{
    vector<bool>is_prime(N+1,true);
    is_prime[0]=is_prime[1]=false;
    for (int i = 2; i*i <=N; i++)
    {
        if (is_prime[i]) {
        for (int j = i * i; j <= N; j += i)
            is_prime[j] = false;
        }
    }
    vector<int>v;
    for (int i = 2; i <=N; i++)
    {
        if(is_prime[i]) v.push_back(i);
    }
    
    
    int n;cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    cout<<v[n-1]<<endl;
    
    return 0;
}