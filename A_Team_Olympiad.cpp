////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          INTAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//                                                                    ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Qtpie 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    Fast_io();
    ll s;
    cin >> s;
    vector<int> c(s);
    set<int> st;
    map<int, int> mp;
    for (int i = 0; i < s; i++)
    {
        cin >> c[i];
        st.insert(c[i]);
        mp[c[i]]++;
    }
    sort(c.begin(), c.end());
    if (st.size() < 3)
    {
        cout << 0 << endl;
    }
    else
    {
        int temp_cnt = INT_MAX;
        for (auto i : mp)
        {
            // cout << i.first << " " << i.second << endl;
            int temp = i.second;
            temp_cnt = min(temp_cnt, temp);
        }
        cout << temp_cnt << endl;
    }

    return 0;
}