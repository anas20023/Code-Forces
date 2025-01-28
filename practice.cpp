#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to solve a single test case
bool canCrossBridgeInTime(int N, long long K, vector<int>& S) {
    // Sort the crossing times in ascending order
    sort(S.begin(), S.end());
    
    long long total_time = 0;

    // If there are only 1 or 2 travelers, they can cross directly
    if (N == 1) {
        total_time = S[0];  // Only one traveler crosses
    } else if (N == 2) {
        total_time = S[1];  // Two travelers cross together in the slower traveler's time
    } else {
        // Use a greedy approach for more than 2 travelers
        int i = N - 1;  // Start with the last (slowest) traveler
        while (i > 2) {
            // Two strategies to compare
            long long strategy1 = S[1] + S[0] + S[i] + S[1];  // Fastest return, then slowest cross
            long long strategy2 = S[i] + S[0] + S[i-1] + S[0];  // Fastest always returns
            total_time += min(strategy1, strategy2);
            i -= 2;  // Two slowest travelers crossed
        }
        // For the last 3 or 2 travelers
        total_time += (i == 2) ? S[2] + S[1] + S[0] : S[1];
    }

    // Check if the total crossing time is within the limit
    return total_time <= K;
}

int main() {
    int T;
    cin >> T;  // Number of test cases
    for (int t = 1; t <= T; ++t) {
        int N;
        long long K;
        cin >> N >> K;
        
        vector<int> S(N);
        for (int i = 0; i < N; ++i) {
            cin >> S[i];  // Crossing times for each traveler
        }
        
        // Solve the test case and output the result
        bool canCross = canCrossBridgeInTime(N, K, S);
        cout << "Case #" << t << ": " << (canCross ? "YES" : "NO") << endl;
    }
    
    return 0;
}
