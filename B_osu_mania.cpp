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
        vector<int> pos;
        int n;
        cin >> n;
        char arr[n][4];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = n-1; i >=0; i--)
        {
            for (int j = 3; j >=0; j--)
            {
                //cout<< arr[i][j]<<" ";
                if (arr[i][j] == '#')
                {
                    pos.push_back(j+1);
                }
            }
             //cout<<endl;
        }
        for (int i = 0; i <pos.size(); i++)
        {
            cout << pos[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
