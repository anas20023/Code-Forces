#include <iostream>
#include <string>
#include <vector>
#define intt long long
using namespace std;

int main()
{
    intt x, count = 1;
    cin >> x;
    vector<string> m;
    for (int i = 0; i < x; i++)
    {
        string p;
        cin >> p;
        m.push_back(p);
    }
    for (int j = 0; j < m.size() - 1; j++)
    {
        if (m[j] != m[j + 1])
        {
            count++;
        }
        // cout << m[j] << " ";
    }
    cout << count << "\n";

    return 0;
}