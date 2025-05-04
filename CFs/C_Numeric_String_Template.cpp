////////////////              ANAS IBN BELAL            /////////////////
//                          Template   Code                           ||
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            map<int, char> int_to_char;
            map<char, int> char_to_int;
            bool valid = true;

            for (int i = 0; i < n; i++)
            {
                int ai = a[i];
                char si = s[i];

                if (int_to_char.count(ai) == 0 && char_to_int.count(si) == 0)
                {
                    int_to_char[ai] = si;
                    char_to_int[si] = ai;
                }
                else if (int_to_char[ai] != si || char_to_int[si] != ai)
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
