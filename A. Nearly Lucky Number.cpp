#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long x;
    int flag = 0;
    cin >> x;

    while (x != 0)
    {

        int num = x % 10;
        if (num == 4 || num == 7)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
        x /= 10;
    }
    (flag == 0) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}