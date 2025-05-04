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
        string s,t;cin>>s>>t;
        int idx=0;
        for (int i = 0; i <s.size() && idx<t.size() ; ++i)
        {
            if(s[i]==t[idx])
            {
                idx++;
            }
            else if(s[i]=='?')
            {
                s[i]=t[idx];
                idx++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                s[i]='c';
            }
        }
        if(idx==t.size())
        {
            cout<<"YES\n";
            cout<<s<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
