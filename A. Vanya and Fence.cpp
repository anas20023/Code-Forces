#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, p, count = 0;
    cin >> n >> p;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (v[i] <= p)
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }
    cout << count << "\n";

    return 0;
}