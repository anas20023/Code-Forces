#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        v[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}