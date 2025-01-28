////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
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
#define Qtpie 2 * acos(0.0)
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
    int n;
    cin >> n;
    multimap<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        mp.insert(make_pair(tmp, i));
    }
    int src;
    cin >> src;
    map<int, int>::iterator itr;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        // cout << itr->first << " " << itr->second << endl;
        if (itr->first == src)
        {
            cout << itr->second << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}