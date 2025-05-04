////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        string s, sm;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (sm.back() != s[i])
            {
                sm.push_back(s[i]);
            }
        }
        // cout << sm << endl;
        map<char, int> mp;
        bool flag = false;
        for (int i = 0; i < sm.size(); i++)
        {
            if (mp[sm[i]] != 0)
            {
                flag = true;
                break;
            }
            else
            {
                mp[s[i]]++;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
