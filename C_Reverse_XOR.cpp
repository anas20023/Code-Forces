#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        //cout<<(n^0)<<endl;
        string sn;
        if (n == 0) sn = "0";
        else {
            while (n > 0) {
                sn.push_back((n & 1) ? '1' : '0');
                n >>= 1;
            }
            reverse(sn.begin(), sn.end());
        }
        string ans="NO";
         for (int len = 1; len < 64; len++) {
            if ((int)sn.size() <= len) {
                
                string w(len - sn.size(), '0');
                w += sn;

                
                bool ok = true;
                for (int i = 0; i < len/2; i++) {
                    if (w[i] != w[len - 1 - i]) {
                        ok = false;
                        break;
                    }
                }

                
                if (ok && (len % 2 == 1)) {
                    if (w[len/2] != '0') ok = false;
                }

                if (ok) {
                    ans = "YES";
                    break;
                }
            }
        }

        cout << ans << "\n";
        

    }
    return 0;
}