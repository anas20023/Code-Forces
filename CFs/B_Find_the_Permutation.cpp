#include <bits/stdc++.h>
using namespace std;
// Graph -> Matrix Representation
const int N=1e3+10;
int mgraphh[N][N];
 // Space Complexity: O(N^2)
//  bool  ch(vector<int>&g ,int x,int y)
//  {
//     if(g[x][y] == '1') return x < y;
//     else return x > y;
// }
int main()
{
    int tc;cin>>tc;
    while(tc--){

        int n;cin>>n;
        vector<string> g(n);
        for(auto &i : g) {
            cin >> i;
        }
        vector<int> p(n);
        for (int i = 0; i < n; i++) p[i]=i;
        
        sort(p.begin(), p.end(),
        [&](int x, int y) {
            if(g[x][y] == '1') return x < y;
            else return x > y;
        });
        for(auto i : p) cout << i + 1 << " "; cout << '\n';
      

    }
    
    return 0;
}