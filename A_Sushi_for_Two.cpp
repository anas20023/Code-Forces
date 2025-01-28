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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int res = 0, len = 1;
    vector<int> lens;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            len++;
        }
        else
        {
            lens.push_back(len);
            len = 1;
        }
    }
    lens.push_back(len);

    for (int i = 1; i < lens.size(); i++)
    {
        res = max(res, min(lens[i], lens[i - 1]));
    }
    cout << 2 * res << '\n';
    return 0;
}
