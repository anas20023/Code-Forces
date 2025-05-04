#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<char> bg;
    for (int i = 1; i <= n; i++)
    {
        char x;
        cin >> x;
        bg.push_back(x);
    }
    for (int j = 1; j <= t; j++)
    {
        for (int i = n; i >= 1; i--)
        {
            if (bg[i] == 'G' && bg[i - 1] == 'B')
            {
                bg[i] = 'B';
                bg[i - 1] = 'G';
                i--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << bg[i];
    }

    return 0;
}