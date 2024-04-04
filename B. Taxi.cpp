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
    int case_1 = 0, case_2 = 0, case_3 = 0, case_4 = 0;
    int x, sum = 0, temp = 0, total_car = 0;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            case_1++;
        }
        else if (v[i] == 2)
        {
            case_2++;
        }
        else if (v[i] == 3)
        {
            case_3++;
        }
        else if (v[i] == 4)
        {
            case_4++;
        }
    }
    // cout << case_1 << endl;
    // cout << case_2 << endl;
    // cout << case_3 << endl;
    // cout << case_4 << endl;
    total_car += case_4;
    //  cout << total_car << endl;
    while (case_3 != 0 && case_1 != 0)
    {
        total_car++;
        case_3--;
        case_1--;
    }
    // cout << total_car << endl;
    if (case_3 != 0)
    {
        total_car += case_3;
    }

    while (case_2 != 0 && case_1 >= 2)
    {
        total_car++;
        case_2--;
        case_1 -= 2;
    }
    // cout << total_car << endl;
    sum = 2 * case_2;
    sum += case_1;
    if (sum % 4 == 0)
    {
        temp = sum / 4;
    }
    else
    {
        temp = sum / 4;
        temp++;
    }
    cout << total_car + temp << endl;
    return 0;
}
