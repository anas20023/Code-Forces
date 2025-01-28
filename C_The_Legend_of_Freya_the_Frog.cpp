////////////////              ANAS IBN BELAL            /////////////////
//                          Template   Code                           ||
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
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int x_axis,y_axis;
        if (x % k == 0)
            x_axis = x / k;
        else
            x_axis = (x / k) + 1;

        if (y % k == 0)
            y_axis = y / k;
        else
            y_axis = (y / k) + 1;
        int min_val = min(x_axis, y_axis);
        int max_val = max(x_axis, y_axis);
        int ans = min_val + max_val + (max_val - min_val);
        if (x_axis > y_axis)
        {
            ans--;
        }
        cout << ans << endl;
}
return 0;
}
