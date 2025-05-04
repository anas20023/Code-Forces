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
    string x;
    getline(cin, x);
    if (x[0] >= 'A' && x[0] <= 'Z')
    {
        cout << x << endl;
    }
    else
    {
        for (int i = 1; i < x.size(); i++)
        {
            if (x[0] >= 'a' && x[0] <= 'z')
            {
                x[0] -= 32;
            }
            if (x[i] >= 'A' && x[i] <= 'Z')
            {
                x[i] += 32;
            }
        }
        cout << x << endl;
    }

    return 0;
}
