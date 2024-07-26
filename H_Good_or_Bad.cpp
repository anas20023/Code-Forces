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
        string s;
        cin >> s;
        int flag = 0;
        for (int j = 0; j <= s.length() - 3; j++)
        {
            string x = s.substr(j, 3);
            if (x == "010" || x == "101")
            {
                flag++;
                cout << "Good" << endl;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}
