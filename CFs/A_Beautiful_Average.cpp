#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ans = max(ans, v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
