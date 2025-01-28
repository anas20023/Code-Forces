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
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = a.size() - 1; a[i] == '0'; i--)
    {
        a.pop_back();
    }
    for (int i = b.size() - 1; b[i] == '0'; i--)
    {
        b.pop_back();
    }
    // cout << a << " " << b;
    if (a.size() > b.size())
    {
        cout << ">" << endl;
    }
    else if (a.size() < b.size())
    {
        cout << "<" << endl;
    }
    else
    {
        bool flag = false;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] > b[i])
            {
                flag = true;
                cout << ">";
                break;
            }
            if (a[i] < b[i])
            {
                flag = true;
                cout << "<";
                break;
            }
        }
        if (!flag)
        {
            cout << "=" << endl;
        }
    }

    return 0;
}
