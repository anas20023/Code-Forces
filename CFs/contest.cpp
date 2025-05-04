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
     int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    int x_c = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            x_c++;
        } else {
    
            if (x_c >= 3) {
                cnt += x_c - 2;
            }
            x_c = 0;
        }
    }
    
    if (x_c >= 3) {
        cnt += x_c - 2;
    }

    cout << cnt << endl;
    return 0;
}
