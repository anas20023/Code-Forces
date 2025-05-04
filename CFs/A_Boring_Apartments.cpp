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
        int c;
        cin >> c;
        int dgt = 0;
        int mtdgt = ((c % 10) - 1) * 10;
        while (c != 0)
        {
            dgt++;
            c /= 10;
        }
        if (dgt == 2)
            mtdgt += 1;
        else if (dgt == 3)
            mtdgt += 3;
        else if (dgt == 4)
            mtdgt += 6;
        cout << dgt + mtdgt << endl;
    }

    return 0;
}
