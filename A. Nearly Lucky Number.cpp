#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long x;
    int count = 0;
    cin >> x;

    while (x != 0)
    {

        int temp = x % 10;
        if (temp == 4)
        {
            count++;
        }
        else if (temp == 7)
        {
            count++;
        }
        x /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}