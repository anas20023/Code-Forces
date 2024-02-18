#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<long long> x;
        long long mY_score = 0;
        for (int j = 0; j < 2 * n; j++)
        {
            long long temp;
            cin >> temp;
            x.push_back(temp);
        }
        for (int k = 0; k < n; k++)
        {
            mY_score += min(x[k], x[k + 1]);
            x.erase(x.begin(), x.begin() + 1);
        }
        cout << mY_score << "\n";
        x.clear();
        // cout << x.size();
    }

    return 0;
}