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
map<char, ll> mp;
void setMap()
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        mp[i] = 0;
    }
}
int main()
{
    Fast_io();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        setMap();
        ll n;
        cin >> n;
        vector<ll> vc(n);
        string ans;
        for (ll i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        map<char, ll>::iterator it;
        for (ll i = 0; i < n; i++)
        {
            for (it = mp.begin(); it != mp.end(); it++)
            {
                // cout << it->first << " " << it->second << " ";
                if (vc[i] == it->second)
                {
                    it->second++;
                    ans.push_back(it->first);
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
