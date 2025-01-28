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
    ll tc, total_corner = 0;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string shapes;
        getline(cin, shapes);
        if (shapes == "Tetrahedron")
        {
            total_corner += 4;
        }
        else if (shapes == "Cube")
        {
            total_corner += 6;
        }
        else if (shapes == "Octahedron")
        {
            total_corner += 8;
        }
        else if (shapes == "Dodecahedron")
        {
            total_corner += 12;
        }
        else if (shapes == "Icosahedron")
        {
            total_corner += 20;
        }
    }
    cout << total_corner << endl;

    return 0;
}
