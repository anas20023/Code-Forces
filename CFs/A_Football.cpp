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
    int c;
    cin >> c;
    map<string, int> mp;
    for (int i = 0; i < c; i++)
    {
        string temp;
        cin >> temp;
        mp[temp]++;
    }
    int ck = 0;
    string win;
    for (auto i : mp)
    {
        if (i.second > ck)
        {
            ck = i.second;
            win = i.first;
        }
    }
    cout << win << endl;

    return 0;
}