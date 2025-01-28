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

void Fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    Fast_io();
    int n;
    cin >> n;
    vector<string> vc(n);
    for (int i = 0; i < n; ++i) {
        cin >> vc[i];
    }
    sort(vc.begin(), vc.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });
    for (int i = 0; i < n - 1; ++i) {
        if (vc[i + 1].find(vc[i]) == string::npos) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for (const string &s : vc) {
        cout << s << endl;
    }
    
    return 0;
}
