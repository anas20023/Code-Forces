#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (int(x) >= 48 && int(x) <= 57)
    {
        cout << "IS DIGIT\n";
    }
    else if (int(x) >= 65 && int(x) <= 90)
    {
        cout << "ALPHA\n";
        cout << "IS CAPITAL\n";
    }
    else if (int(x) >= 97 && int(x) <= 122)
    {
        cout << "ALPHA\n";
        cout << "IS SMALL\n";
    }
    return 0;
}