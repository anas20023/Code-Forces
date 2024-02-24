#include <iostream>
using namespace std;

int main()
{
    int x, temp;
    cin >> x;
    for (int i = 1;; i++)
    {
        temp = ((3 * i * i) - i) / 2;
        if (i == x)
        {
            cout << temp << endl;
            break;
        }
    }

    return 0;
}