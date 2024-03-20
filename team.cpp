#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, count = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1 && c == 1) || (a == 1 && b == 1 && c == 0) || (a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 1))
        {
            count++;
        }
        else
        {
            count += 0;
        }
    }
    cout << count << endl;

    return 0;
}