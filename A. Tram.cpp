#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int Max_pass = INT_MIN, cur_pass = 0;
    for (int i = 1; i <= c; i++)
    {
        int a, b;
        cin >> a >> b;
        cur_pass -= a;
        cur_pass += b;
        Max_pass = max(Max_pass, cur_pass);
    }
    cout << Max_pass << "\n";

    return 0;
}