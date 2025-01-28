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
    string a;
    cin >> a;
    // cout << a[0];
    if (a[0] >= '0' && a[0] <= '9')
    {
        cout << a << endl;
    }
    else if (a.size() == 3 && a[a.size() - 1] == '0')
    {
        cout << 0 << endl;
    }
    else
    {
        // cout << a[a.size() - 1] << endl;
        if (a[a.size() - 1] > a[a.size() - 2])
        {
            a.pop_back();
            cout << a << endl;
        }
        else 
        {
            a.erase(a.end() - 2);
            cout << a << endl;
        }
    }
    return 0;
}
