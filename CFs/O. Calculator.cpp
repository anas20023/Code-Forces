#include <iostream>
#define ll long long
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n_1, n_2;
    char x;
    cin >> n_1 >> x >> n_2;
    if (x == '+')
    {
        cout << n_1 + n_2 << "\n";
    }
    else if (x == '-')
    {
        cout << n_1 - n_2 << "\n";
    }
    else if (x == '*')
    {
        cout << n_1 * n_2 << "\n";
    }
    else if (x == '/')
    {
        cout << n_1 / n_2 << "\n";
    }
    return 0;
}