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
        ll day, Points, lecture, task;
        cin >> day >> Points >> lecture >> task;
        ll total_task = (day + 6) / 7;
        ll st = 1, end = day, ans = 0;
        while (st <= end)
        {
            ll mid = (st + end) / 2;
            ll curr_pt = mid * lecture + task * min(2 * mid, total_task);
            if (Points <= curr_pt)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        cout << day - ans << endl;
    }

    return 0;
}
