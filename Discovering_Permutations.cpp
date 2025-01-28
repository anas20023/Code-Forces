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
    string x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 1;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        cin.ignore();
        set<string> st;
        string mstr = x.substr(0, n);
        // cout << mstr << endl;
        st.insert(mstr);
        for (int i = 0; i < k - 1; i++)
        {
            if (next_permutation(mstr.begin(), mstr.end()))
            {
                // cout << mstr << endl;
                st.insert(mstr);
            }
        }
        //  sort(st.begin(), st.end());
        cout << "Case " << i << ":" << endl;
        for (auto i : st)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
