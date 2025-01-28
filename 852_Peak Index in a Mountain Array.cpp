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
    vector<int> arr = {0, 10, 5, 2};
    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]] = i;
    }
    // sort(mp.begin(),mp.end());
    int maxel = INT_MIN;
    int maxIDx = -1;
    for (auto i : mp)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.first > maxel)
        {
            maxel = i.first;
            maxIDx = i.second;
        }
    }
   cout<<maxIDx<<endl;
    //return maxIDx;

    return 0;
}
