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
    // int tc = 1;
    // cin >> tc;
    // while (tc--)
    // {
    // }
    int n,m;cin>>n>>m;cin.ignore();
    map<string,string>mp;
    for (int i = 0; i < n; ++i)
    {
        string cmd;
        getline(cin,cmd);
        string ip,srv;
        //cout<<"running"<<endl;
        for (int i = cmd.size()-1; cmd[i]!=' '; --i)
        {
            ip.push_back(cmd[i]);
        }
        for (int i = 0; cmd[i]!=' '; i++)
        {
            srv.push_back(cmd[i]);
        }
        reverse(ip.begin(),ip.end());
      // cout<<ip<<endl;
        mp[ip]=srv;
    }
    // for (auto i :mp)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for (int i = 0; i < m; ++i)
    {
        string cmd;
        getline(cin,cmd);
        string ip,srv;
        //cout<<"running"<<endl;
        for (int i = cmd.size()-2; cmd[i]!=' '; --i)
        {
            ip.push_back(cmd[i]);
        }
        for (int i = 0; cmd[i]!=' '; i++)
        {
            srv.push_back(cmd[i]);
        }
        reverse(ip.begin(),ip.end());
      //cout<<ip<<endl;
      cout<<srv<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
    
    return 0;
}
