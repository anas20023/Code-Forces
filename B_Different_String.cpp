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
        string a;
        cin >> a;
        set<char> x;
        for (int i = 0; i < a.size(); i++)
        {
            x.insert(a[i]);
        }
        if (x.size() == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            // sort(a.begin(), a.end());
            reverse(a.begin(), a.end());
            cout << a << endl;
        }
    }

    return 0;
}
