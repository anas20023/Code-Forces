#include <iostream>
#include <vector>
#define ll double
using namespace std;

int main()
{
    ll x, sum = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        ll temp;
        cin>> temp;
        sum += temp;
    }
    //cout<<sum/x;
    printf("%0.12f\n", sum / x);

    return 0;
}