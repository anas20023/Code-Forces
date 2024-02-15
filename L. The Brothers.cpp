#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (b == d)
    {
        cout << "ARE Brothers\n";
    }
    else
    {
        cout << "NOT\n";
    }
    return 0;
}