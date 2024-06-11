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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        if (k == mp['B'] or k == 0 && mp['B'] <= 0)
        {
            cout << 0 << endl;
        }
        else if (k == 0)
        {
            cout << 1 << endl;
            cout << n << " " << "A" << endl;
        }
        else
        {
            if (k > mp['B'])
            {
                int cnt = 0;
                int idx = -1;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'A')
                    {
                        cnt++;
                        if (cnt == k - mp['B'])
                        {
                            idx = i;
                            break;
                        }
                    }
                }
                cout << 1 << endl;
                cout << idx + 1 << " " << "B" << endl;
            }
            else
            {
                int cnt = 0;
                int idx = -1;
                for (int i = n - 1; i >= 0; i--)
                {
                    if (s[i] == 'B')
                    {

                        if (cnt == k)
                        {
                            idx = i;
                            break;
                        }
                        cnt++;
                    }
                }
                cout << 1 << endl;
                cout << idx + 1 << " " << "A" << endl;
            }
        }
    }

    return 0;
}
