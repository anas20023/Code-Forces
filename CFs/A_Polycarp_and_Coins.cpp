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
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll num;
        cin >> num;
        // cout << num / 3 << endl;
        ll cnt_x, cnt_y;
        cnt_x = num / 3;
        cnt_y = num / 3;
        // cout << num % 3 << endl;
        if (num % 3 == 1)
        {
            cnt_x++;
        }
        else if (num % 3 == 2)
        {
            cnt_y++;
        }
        cout << cnt_x << " " << cnt_y << endl;
    }

    return 0;
}
