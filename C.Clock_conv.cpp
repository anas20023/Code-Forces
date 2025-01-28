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
    cin.ignore();
    while (tc--)
    {
        string a;
        getline(cin, a);
        //cout << a << endl;
        if (a[0] == '0' && a[1] == '0')
        {
            cout << "12:" << a[3] << a[4] << " AM\n";
        }
        else if (a[0] == '0' && (a[1] == '1' || a[1] == '2' || a[1] == '3' || a[1] == '4' || a[1] == '5' || a[1] == '6' || a[1] == '7' || a[1] == '8' || a[1] == '9'))
        {
            cout << a << " AM" << endl;
        }
        else if (a[0] == '1' && (a[1] == '0' || a[1] == '1'))
        {
            cout << a << " AM" << endl;
        }
         else if (a[0] == '1' && a[1] == '2')
        {
            cout << "12:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '3')
        {
            cout << "01:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '4')
        {
            cout << "02:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '5')
        {
            cout << "03:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '6')
        {
            cout << "04:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '7')
        {
            cout << "05:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '8')
        {
            cout << "06:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '1' && a[1] == '9')
        {
            cout << "07:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '2' && a[1] == '0')
        {
            cout << "08:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '2' && a[1] == '1')
        {
            cout << "09:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '2' && a[1] == '2')
        {
            cout << "10:" << a[3] << a[4] << " PM" << endl;
        }
        else if (a[0] == '2' && a[1] == '3')
        {
            cout << "11:" << a[3] << a[4] << " PM" << endl;
        }
    }

    return 0;
}
