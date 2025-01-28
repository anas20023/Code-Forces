#include <iostream>
using namespace std;
long long Get_Sum(long long x)
{
    long long sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int t_c;
    cin >> t_c;
    for (int o = 0; o < t_c; o++)
    {
        long long x, i, sum = 0;
        cin >> x;
        for (i = 1; i <= x; i++)
        {
            if (i == 1)
            {
                sum += i;
            }
            if (i == 2)
            {
                sum += i;
            }
            if (i == 3)
            {
                sum += i;
            }
            if (i == 4)
            {
                sum += i;
            }
            if (i == 5)
            {
                sum += i;
            }
            if (i == 6)
            {
                sum += i;
            }
            if (i == 7)
            {
                sum += i;
            }
            if (i == 8)
            {
                sum += i;
            }
            if (i == 9)
            {
                sum += i;
            }
            if (i > 9)
            {
                sum += Get_Sum(i);
            }
        }
        cout << sum << "\n";
    }

    return 0;
}