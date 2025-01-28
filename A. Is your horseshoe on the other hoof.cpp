#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main()
{
    set<ll> a;
    for (ll i = 0; i < 4; i++)
    {
        ll temp;
        cin >> temp;
        a.insert(temp);
    }
    cout << 4 - a.size() << endl;

    return 0;
}