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
        map<string, int> trc;
        vector<string> q(s);
        for (int i = 0; i < s; i++)
        {
            cin >> q[i];
            trc[q[i]] = 1;
        }
        for (int i = 0; i < s; i++)
        {
            int temp = 0;
            for (int j = 1; j < q[i].size(); j++)
            {
                string t1 = q[i].substr(0, j);
                string t2 = q[i].substr(j, q[i].size() - 1);
                if (trc[t1] && trc[t2])
                {
                    temp = 1;
                    break;
                }
            }
            (temp) ? cout << 1 : cout << 0;
            temp = 0;
        }
        cout << endl;
    }

    return 0;
}
