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
    bool flag=false;
    int n;cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int prc,qlt;cin>>prc>>qlt;
        if(prc>qlt)
        {
            cout<<"Happy Alex\n";
            flag=true;
            break;
        }
    }
    if(flag==false)
        cout<<"Poor Alex"<<endl;
    return 0;
}
