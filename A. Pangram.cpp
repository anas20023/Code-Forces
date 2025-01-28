#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    char a[x];
    set<char> p;
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
        // cout << a[i];
    }
    for (int i = 0; i < x; i++)
    {
        p.insert(a[i]);
    }

    (p.size() == 26) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}