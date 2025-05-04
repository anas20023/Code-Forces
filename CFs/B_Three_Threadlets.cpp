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
        vector<int>v(3);
        for (int i = 0; i < 3; ++i)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[1]%v[0] == 0 && ((v[1]/v[0] == 2 && v[2]%v[0] == 0 && v[2]/v[0] <= 3)
        || (v[1]/v[0] == 1 && v[2]%v[0] == 0 && v[2]/v[0] <= 4)))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}
