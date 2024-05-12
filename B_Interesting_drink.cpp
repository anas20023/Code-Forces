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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        bool check = false;
        ll st = 0, en = n - 1, mid;
        while (st <= en)
        {
            mid = (st + en) / 2;
            if (arr[mid] == m)
            {
                cout << mid + 1 << endl;
                check = true;
                break;
            }
            else if (arr[mid] > m)
            {
                en = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        if (!check)
            cout << 0 << endl;
    }
    return 0;
}