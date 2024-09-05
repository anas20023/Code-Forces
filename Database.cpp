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
    int cnt=1;
    while (tc--)
    {
        int st,sub;cin>>st>>sub;
        map<int,int>mp;
        for (int i = 0; i < sub; i++)
        {
            int a,b;cin>>a>>b;
            mp[b]++;
        }
        bool flag=false;
        for (auto i :mp)
        {
            if(i.second>st)
            {
                flag=true;
                break;
            }
        }
        (flag)?cout<<"Scenario #"<<cnt<<": "<<"impossible\n":cout<<"Scenario #"<<cnt<<": "<<"possible\n";
        cnt++;
        
    }
    return 0;
}
