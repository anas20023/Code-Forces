#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ll k, l, m, n, temp, count = 0;
    cin >> k >> l >> m >> n >> temp;
    count = temp;
    if (k == 1 && l == 1 && m == 1 && n == 1)
    {
        cout << count << endl;
    }
    else
    {
        for (int i = 1; i <= temp; i++)
        {
            if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
            {
                count--;
            }
        }
        cout << count << endl;
    }
    return 0;
}