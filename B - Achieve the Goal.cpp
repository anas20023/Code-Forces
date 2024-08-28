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
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> vc(n - 1);
    int currSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> vc[i];
        currSum += vc[i];
    }
    int neededSum = n * m;
    int due = neededSum - currSum;
    if (due < 0)
    {
        cout << 0 << endl;
    }
    else if (due <= k)
    {
        cout << due << endl;
    }
    else if (due > k)
    {
        cout << -1 << endl;
    }
    return 0;
}
