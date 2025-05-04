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
        ll s;
        cin >> s;
        vector<ll> el(s);
        vector<ll> track(105, 0);
        for (int i = 0; i < s; i++)
        {
            cin >> el[i];
            track[el[i]]++;
        }
        for (int i = 0; i < s; i++)
        {
            if (track[el[i]] == 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
