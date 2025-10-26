#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
         ll ans=0;
       for (int bit = 0; bit < 32; bit++) 
        {
            int z = 0, o = 0;
            for(int j = 0; j < n; j++){     
                if(v[j] & (1 << bit)){     
                    o++;
                } else {
                    z++;
                }
            }
            ans += (ll)o * z * (1LL << bit);
        }
        cout << ans << endl;
        
        
    }
    return 0;
}