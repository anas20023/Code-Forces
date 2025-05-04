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
        int a, b, c;
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        int mn = INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            int temp = 0;
            for (int j = 0; j < 3; j++)
            {
                // cout << v[j] << " - " << v[i] << endl;
                temp += abs(v[j] - v[i]);
                // cout << abs(v[j] - v[i]) << endl;
            }
            mn = min(temp, mn);
            // cout << temp << endl;
        }
        cout << mn << endl;
    }

    return 0;
}
