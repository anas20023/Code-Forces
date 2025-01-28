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
    //cin >> tc;
    while (tc--)
    {
        int a,b;cin>>a>>b;
        int arr[a][b];
        for (int i = 0; i < a; ++i)
        {
            for(int j=0;j<b;j++)
            {
                cin>>arr[i][j];
            }
        }
        bool flag=false;
        int f;cin>>f;
        for (int i = 0; i < a; ++i)
        {
            for(int j=0;j<b;j++)
            {
                if(arr[i][j]==f)
                {
                    // cout<<"will not take number\n";
                    flag=true;
                    //break;
                }
            }
        }
        (flag)?cout<<"will not take number\n":cout<<"will take number\n";
    }
    return 0;
}
