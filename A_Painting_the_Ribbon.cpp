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
        int parts,colors,steps;
        cin>>parts>>colors>>steps;
        // int unq_cols=parts-(parts/colors);
        // cout<<unq_cols<<" "<<steps<<endl;
        int rem;
        if(!(parts%colors))rem=parts/colors;
            else rem=(parts/colors)+1;
        parts-=rem;
        if(parts>steps)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
