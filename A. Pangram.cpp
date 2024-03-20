#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int x, cnt = 0;
    cin >> x;
    char a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < x; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        //cout << a[i];
    }

    for (int i = 0; i < x-1; i++)
    {
        if (a[i] != a[i + 1])
        {
            cnt++;
        }
    }
    (cnt >= 26) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}