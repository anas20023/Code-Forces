#include <bits/stdc++.h>
using namespace std;
  const int n=1e5+10;
int main()
{
  
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vector<int>v(n+1,-1);
    for (int i = 1; i <=n; i++)
    {
        if(is_prime[i]) {
            v[i]=i;
        }else{
            v[i]=v[i-1];
        }
    }
    // for (int i = 1; i <=10; i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    

    int t;cin>>t;
    while(t--){
    int l,r;cin>>l>>r;
      if(v[r]<l) cout<<-1<<endl;
      else cout<<v[r]<<endl;
       
    }
    return 0;
}