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
        int n;
        cin >> n;
        vector<int> vc(n);
        set<int> ch;
        set<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
            ch.insert(vc[i]);
        }
        if (ch.size() != n)
        {
            sort(vc.rbegin(), vc.rend());
            for (int i = 1; i <n; i++)
            {
                if (vc[i] == vc[i - 1])
                {
                    ans.insert(vc[i]);
                }
                i++;
            }
            cout << ans.size() << endl;
        }
        else
        {
            cout << ch.size() << endl;
        }
    }

    return 0;
}
