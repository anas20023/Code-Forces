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
        int f, s, t, ft;
        cin >> f >> s >> t >> ft;
        vector<int> v;
        vector<int> vc;
        v.push_back(f);
        v.push_back(s);
        vc.push_back(t);
        vc.push_back(ft);
        sort(v.begin(), v.end());
        sort(vc.begin(), vc.end());
        int nd = min(v[1], vc[1]);
        //cout << nd << endl;
        if (nd < v[0] || nd < vc[0])
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
