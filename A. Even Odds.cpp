#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    if (n % 2 == 0 && x <= (n / 2))
    {
        cout << (2 * x) - 1 << "\n";
    }
    else if (n % 2 == 0 && x > (n / 2))
    {
        cout << 2 * (x - (n / 2)) << "\n";
    }
    else if (n % 2 != 0 && x <= ((n / 2) + 1))
    {
        cout << (2 * x) - 1 << "\n";
    }
    else if (n % 2 != 0 && x > ((n / 2) + 1))
    {
        cout << 2 * (x - ((n / 2) + 1)) << "\n";
    }

    return 0;
}