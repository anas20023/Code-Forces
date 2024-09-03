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
        int s;cin>>s;
        vector<int>v(s);
        for (int i = 0; i < s; ++i)
        {
            cin>>v[i];
        }
        int sum=0;
        for (int i = 0; i < s; ++i)
        {
            if(i%2==0)
            {
                sum+=v[i];
            }
            else
            {
                sum-=v[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
