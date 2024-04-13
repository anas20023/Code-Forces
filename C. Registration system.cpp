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
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <deque>
#include <list>
#include <limits.h>
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
    map<string, int> c;
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string reg_name;
        // getline(cin, reg_name);
        cin >> reg_name;
        if (c[reg_name]==0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << reg_name << c[reg_name] << endl;
        }
        c[reg_name]++;
    }
    return 0;
}
