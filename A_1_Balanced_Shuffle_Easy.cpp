////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
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
    string d;
    cin >> d;
    vector<tuple<int, int, char>> a(d.size());
    for (int i = 0, sum = 0; i < (int)d.size(); ++i)
    {
        a[i] = make_tuple(sum, -i, d[i]);
        if (d[i] == '(')
            ++sum;
        else
            --sum;
    }
    sort(a.begin(), a.end());
    string ans;
    for (const auto &t : a)
    {
        ans += get<2>(t);
    }
    cout << ans << '\n';
    return 0;
}
