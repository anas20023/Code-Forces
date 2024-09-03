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
        int l,r,L,R;cin>>l>>r>>L>>R;
        if(r<L || R<l)
        {
            cout<<1<<endl;
            continue;
        }
        vector<int>vc(101,0);
        for (int i = l; i <=r; ++i)
        {
            vc[i]++;
        }
         for (int i = L; i <=R; ++i)
        {
            vc[i]++;
        }
        int cnt=0;
        for (int i = 1; i < 101; ++i)
        {
            if(vc[i]==2 && vc[i-1]>0)
            {
                cnt++;
            }
            if(vc[i]==1 && vc[i-1]==2)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
