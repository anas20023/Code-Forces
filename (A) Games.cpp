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
    int c, match_count = 0;
    cin >> c;
    vector<ll> for_home(c);
    vector<ll> for_away(c);
    for (int i = 0; i < c; i++)
    {
        cin >> for_home[i] >> for_away[i];
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (for_home[i] == for_away[j])
            {
                match_count++;
            }
        }
    }
    cout << match_count << endl;

    return 0;
}
