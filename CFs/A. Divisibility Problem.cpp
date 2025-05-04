#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b - (a % b) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}