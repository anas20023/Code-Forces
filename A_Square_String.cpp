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
        string st;
        cin >> st;
        if (st.size() % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        bool ck = false;
        for (int i = 0, j = st.size() / 2; i < st.size() / 2; i++, j++)
        {
            if (st[i] != st[j])
            {
                ck = true;
                break;
            }
        }
        (ck) ? cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}
