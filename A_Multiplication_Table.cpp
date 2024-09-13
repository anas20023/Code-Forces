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
   // cin >> tc;
    while (tc--)
    {
        int cnt=0;
        int num,c;cin>>num>>c;
        for (int i = 1; i <=num; ++i)
        {
            if(c%i==0 && c/i<=num)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
