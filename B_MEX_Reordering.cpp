#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), cnt(n + 2, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int mex = 0;
        while (cnt[mex] > 0) {
            mex++;
        }

        bool ok = true;
        for (int x = 0; x < mex; x++) {
            if (cnt[x] == 1) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
