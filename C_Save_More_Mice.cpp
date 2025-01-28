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
        int hole, mice;
        cin >> hole >> mice;
        vector<ll> r(mice);
        for (int i = 0; i < mice; i++)
        {
            cin >> r[i];
        }
        sort(r.begin(), r.end());
        int cat = 0, saved_mice = 0;
        for (int i = mice - 1; i >= 0; i--)
        {
            int steps = hole - r[i];
            // saved_mice++;
            cat += steps;
            saved_mice++;
            if (i > 0 && r[i - 1] <= cat)
            {
                break;
            }
            // cout << r[i] << " ";
        }
        cout << saved_mice << endl;
        // cout << endl;
    }

    return 0;
}
