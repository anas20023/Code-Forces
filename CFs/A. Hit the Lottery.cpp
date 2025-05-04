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
    ll x, note_count = 0;
    cin >> x;
    while (x != 0)
    {
        if (x >= 100)
        {
            note_count += x / 100;
            x %= 100;
        }
        else if (x >= 20)
        {
            note_count += x / 20;
            x %= 20;
        }
        else if (x >= 10)
        {
            note_count += x / 10;
            x %= 10;
        }
        else if (x >= 5)
        {
            note_count += x / 5;
            x %= 5;
        }
        else if (x >= 1)
        {
            note_count += x / 1;
            x %= 1;
        }
    }
    cout << note_count << endl;

    return 0;
}
