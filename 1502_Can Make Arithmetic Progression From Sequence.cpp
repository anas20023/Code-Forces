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
    // vector<int> arr = {3, 5, 1};
    //vector<int> arr = {1, 2, 4};
    sort(arr.begin(), arr.end());
    bool flag = true;
    int diff = arr[1] - arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        int tmp = arr[i] - arr[i - 1];
        if (diff != tmp)
        {
            flag = false;
            break;
        }
    }
    cout << flag << endl;

    return 0;
}
