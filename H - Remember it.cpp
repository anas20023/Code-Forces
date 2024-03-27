#include <iostream>
#include <queue>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll x;
    cin >> x;
    vector<ll> p(x);
    priority_queue<ll, greater<ll>> even;
    priority_queue<ll> odd;
    for (int i = 0; i < x; i++)
    {
        cin >> p[i];
        if (p[i] % 2 == 0)
        {
            even.push(p[i]);
        }
        else
        {
            odd.push(p[i]);
        }
    }
    for (auto i : odd)
    {
        cout<<i<<" ";
    }
    for (auto i : even)
    {
        cout<<i<<" ";
    }

    return 0;
}