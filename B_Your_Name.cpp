#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        map<char, int> mp1, mp2;
        for (int i = 0; i < n; i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if (mp1 == mp2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
