#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        vector<vector<int>> positions(n + 1);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
            positions[b[i]].push_back(i);
        }
        bool isok = false;
        for (auto &i : mp)
        {
            if (i.second % i.first != 0)
            {
                isok = true;
                break;
            }
        }
        if (isok)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> ans(n);
        int val = 1;
        for (auto &p : mp)
        {
            int m = p.first;
            int cnt = p.second;
            int groups = cnt / m;
            const auto &pos_list = positions[m];
            int idx = 0;
            for (int g = 0; g < groups; g++)
            {
                for (int j = 0; j < m; j++)
                {
                    int pos = pos_list[idx++];
                    ans[pos] = val;
                }
                val++;
            }
        }
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}