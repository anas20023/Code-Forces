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
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num / 2 << endl;
        for (int i = 0; i < num / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else if (num == 3)
    {
        cout << 1 << endl
             << 3 << endl;
    }
    else
    {
        cout << ceil(num / 2) << endl;
        for (int i = 0; i < (num / 2) - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}
