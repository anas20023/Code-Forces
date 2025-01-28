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
    //int tc = 1;
    //cin >> tc;
    int a,b;
    while (cin>>a>>b)
    {
        bool ch_hash=true;
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                if(ch_hash)
                {
                    cout<<"#";
                    ch_hash=false;
                }
                else
                {
                    cout<<".";
                    ch_hash=true;
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
