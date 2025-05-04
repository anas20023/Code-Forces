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
        string s;
        cin >> s;
        map<char, int> mp;
        bool ck = false;
        for (int i = 0; i < x; i++)
        {
            if (mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = i;
            }
            else
            {
                if ((i - mp[s[i]]) % 2 == 1)
                {
                    ck = true;
                    break;
                }
                else
                {
                    mp[s[i]] = i;
                }
            }
        }
        if (!ck)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
