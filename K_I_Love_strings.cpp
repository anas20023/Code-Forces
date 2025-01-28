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
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        string s, t, ans;
        cin >> s >> t;
        int i = 0, j = 0;
        while (i < s.size() || j < t.size()) 
        {
            if (i < s.size() && s[i] != ' ')
            {
                ans.push_back(s[i]);
            }
            if (j < t.size() && t[j] != ' ')
            {
                ans.push_back(t[j]);
            }
            i++;
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}
