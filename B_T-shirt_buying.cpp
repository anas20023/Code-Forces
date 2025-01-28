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
const double PI= acos(0.0);
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
    vector<int>price(2e5+10);
    vector<int>front_c(2e5+10);
    vector<int>back_c(2e5+10);
   for(int i=1;i<=tc;i++)
   {
       cin>>price[i];
   }
   for(int i=1;i<=tc;i++)
   {
       cin>>front_c[i];
   }
   for(int i=1;i<=tc;i++)
   {
       cin>>back_c[i];
   }
     priority_queue<int,vector<int>,greater<int>>tq[5][5];
     for (int i = 1; i <=tc; ++i)
     {
         tq[front_c[i]][back_c[i]].push(price[i]);
     }
   
   int m;cin>>m;
   while(m--)
   {
        int qc;cin>>qc;
        int ans=INT_MAX;
        int fc,bc;
        for (int i = 1; i <=3; ++i)
        {
           if(!tq[i][qc].empty()&& tq[i][qc].top()<ans)
           {
            ans=tq[i][qc].top();
            fc=i;bc=qc;
           }
        }
        for (int i = 1; i <=3; ++i)
        {
           if(!tq[qc][i].empty()&& tq[qc][i].top() <ans)
           {
            ans=tq[qc][i].top();
            fc=qc;bc=i;
           }
        }
        if(ans==INT_MAX)
            ans=-1;
        else
            tq[fc][bc].pop();
        cout<<ans<<" ";
   }
   cout << endl;
    return 0;
}
