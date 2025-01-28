////////////////              ANAS IBN BELAL            /////////////////
//                         Test  Case  Template                       ||
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        sort(vc.begin(), vc.end());
        vc[0]++;
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            sum = sum * vc[i];
            //cout << vc[i] << " ";
        }
        //cout << endl;
        cout << sum << endl;
    }

    return 0;
}
