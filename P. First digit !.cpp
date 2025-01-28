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
    int c;
    cin >> c;
    int temp = c / 1000;
    if (temp % 2 == 0)
    {
        cout << "EVEN\n";
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}
