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
    set<char> dst;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            dst.insert(x[i]);
        }
    }
    cout << dst.size() << endl;

    return 0;
}
