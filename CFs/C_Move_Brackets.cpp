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
        int n;cin>>n;
        cin.ignore();
        string s;cin>>s;
        int opb=0,ans=0;
        for (int i = 0; i < n; ++i)
        {
            if(s[i]=='(')
            {
                opb++;
            }
            else
            { 
                ans++;
                if(opb>0)
                {
                    opb--;
                    ans--;
                }
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
