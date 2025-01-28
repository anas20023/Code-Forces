////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          INTAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//                                                                    ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Qtpie 2 * acos(0.0)
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
    int x, y;
    cin >> x >> y;
    vector<ll> vc(x);
    for (int i = 0; i < x; i++)
        cin >> vc[i];
    sort(vc.begin(), vc.end());
    while (y--)
    {
        ll q;
        cin >> q;
        bool f = true;
        int l = 0, h = x - 1;
        while (l <= h)
        {
            // cout << 1 << endl;
            int mid = (l + h) / 2;
            if (vc[mid] == q)
            {
                cout << "found" << endl;
                f = false;
                break;
            }
            else if (vc[mid] > q)
            {
                h = mid - 1;
            }
            else if (vc[mid] < q)
            {
                l = mid + 1;
            }
        }
        if (f)
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
