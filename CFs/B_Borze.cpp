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
    string s;
    vector<char> ans;
    cin >> s;
    // cout << s << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            ans.push_back('0');
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans.push_back('1');
            i++;
        }
        else
        {
            ans.push_back('2');
            i++;
        }
    }

    for (auto i : ans)
    {
        cout << i;
    }

    return 0;
}