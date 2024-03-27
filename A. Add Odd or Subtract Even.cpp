#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, count = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            return 0;
        }
        ll tempa = a, i = 1, j = 2;
        while (a != b)
        {
            // count++;
            if (a + i == b)
            {
                count++;
                break;
            }
            if (a - j == b)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}