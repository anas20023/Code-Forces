////////////////              ANAS IBN BELAL            /////////////////
//                           Template   Code                           ||
//                                                                     ||
//                                                                     ||
//       BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                           INTAKE 52                                 ||
//                       DEPARTMENT OF CSE                             ||
//                                                                     ||
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
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
    
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> teams(n);
    
    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second;
    }
    
    sort(teams.begin(), teams.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    });
    
    pair<int, int> kth_team = teams[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (teams[i] == kth_team) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

