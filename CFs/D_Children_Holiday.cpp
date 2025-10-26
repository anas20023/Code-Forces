#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll required;
vector<ll> ans;

bool isOK(const vector<tuple<ll,ll,ll>> &v, ll T) {
    ll total = 0;
    vector<ll> temp(n, 0);
    ll need = required;
    for (int i = 0; i < n; ++i) {
        ll t, z, y;
        tie(t, z, y) = v[i]; 
        ll block_time = t * z + y;
        ll full_blocks = T / block_time;
        ll cur = full_blocks * z;
        ll rem = T % block_time;
        cur += min(z, rem / t);
        total += cur;
        temp[i] = min(need, cur);
        need -= temp[i];
    }
  
        ans = temp; 
        return total >= required;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> required >> n;
    vector<tuple<ll,ll,ll>> v(n);
    for (int i = 0; i < n; ++i) {
        ll t, z, y;
        cin >> t >> z >> y; 
        v[i] = make_tuple(t, z, y);
    }

    ans.assign(n, 0);
    ll l = 0, r = 1e7; 
    ll best = r;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (isOK(v, mid)) {
            best = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }


    isOK(v, best);

    cout << best << "\n";
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i+1==n?'\n':' ');
    }
    return 0;
}