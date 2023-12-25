#include <iostream>
#include <cmath>

using namespace std;

pair<int, pair<int, int>> min_operations_to_equal_product(int arr[], int n) {
    int negativeIndices[n]; // Array to store negative indices
    int numNegatives = 0;    // Counter for negative numbers

    // Identify negative elements and their positions
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            negativeIndices[numNegatives++] = i;
        }
    }

    // If the number of negative elements is even, no need to change any negative numbers
    if (numNegatives % 2 == 0) {
        return make_pair(0, make_pair(-1, -1)); // -1 indicates no change
    }

    // If the number of negative elements is odd, change the least negative number to its absolute value
    int minNegativeIndex = negativeIndices[0];
    for (int i = 1; i < numNegatives; ++i) {
        if (arr[negativeIndices[i]] < arr[minNegativeIndex]) {
            minNegativeIndex = negativeIndices[i];
        }
    }

    arr[minNegativeIndex] = abs(arr[minNegativeIndex]);

    return make_pair(1, make_pair(minNegativeIndex, arr[minNegativeIndex]));
}

int main() {
    int arr[] = {2, -3, 4, -5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto result = min_operations_to_equal_product(arr, n);

    cout << "Minimum number of operations: " << result.first << endl;
    
    if (result.first > 0) {
        cout << "Sequence of operations: (" << result.second.first << ", " << result.second.second << ")" << endl;
    }

    return 0;
}
