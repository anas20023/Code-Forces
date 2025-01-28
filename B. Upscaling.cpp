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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            int count = 0;
            for (int j = 0; j < 2 * n; j++)
            {
                if (count < 2)
                {
                    cout << "#";
                    count++;
                }
                else
                {
                    cout << ".";
                    count++;
                }
                if (count > 3)
                {
                    count = 0;
                }
            }
            count = 0;
            cout << endl;
        }
    }

    return 0;
}
