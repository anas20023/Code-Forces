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
        int s;
        cin >> s;
        vector<int> v(s);
        for (int i = 0; i < s; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int minVal = INT_MAX;
        for (int i = 0; i < s-1; i++)
        {
            if (minVal > v[i + 1] - v[i])
            {
                minVal = v[i + 1] - v[i];
            }
        }
        cout << minVal << endl;
    }
    return 0;
}
