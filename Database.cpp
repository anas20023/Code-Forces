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
    int tc;
    cin >> tc;
    int cnt = 1;
    
    while (tc--) {
        int N, R;
        cin >> N >> R;
        map<int, set<int>> studentSubjects;
        
        bool corrupted = false;
        
        for (int i = 0; i < R; i++) {
            int studentID, subjectCode;
            cin >> studentID >> subjectCode;
            if (studentSubjects[studentID].count(subjectCode)) {
                corrupted = true;
            }
            studentSubjects[studentID].insert(subjectCode);
        }
        
        if (corrupted) {
            cout << "Scenario #" << cnt << ": impossible\n";
        } else {
            cout << "Scenario #" << cnt << ": possible\n";
        }
        cnt++;
    }
    
    return 0;
}
