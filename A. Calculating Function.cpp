#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll x;
    cin >> x;
    if (x % 2 == 0)
    {
        cout << x / 2 << "\n";
    }
    else
    {
        cout << (x + 1) / -2 << "\n";
    }
    return 0;
}