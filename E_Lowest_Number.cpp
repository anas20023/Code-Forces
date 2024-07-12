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
    int s;
    cin >> s;
    multimap<int, int> mp;
    for (int i = 1; i <= s; i++)
    {
        int x;
        cin >> x;
        mp.insert(pair<int, int>(x, i));
    }
    // sort(mp.begin(), mp.end());
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
        break;
    }

    return 0;
}