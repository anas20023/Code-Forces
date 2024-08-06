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
        string reserved;
        for (int i = 0; i < 26; i++)
        {
            reserved.push_back('a' + i);
        }

        string a, b;
        cin >> a >> b;
        string chck;
        for (int i = 0; i < 10; i++)
        {
            if (a[i] == '?')
            {
                a[i] = reserved[i];
            }
        }
        cout<<a<<endl;
    }

    return 0;
}
