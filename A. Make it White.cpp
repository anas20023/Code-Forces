#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n, count = 0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            a[i] = c;
            if (a[i] == 'B')
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}