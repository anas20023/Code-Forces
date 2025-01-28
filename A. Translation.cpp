#include <iostream>
#include <string>
using namespace std;

int main()
{
    string given;
    string lowen;
    string rev;
    getline(cin, given);
    getline(cin, lowen);
    for (int i = given.length()-1; i >= 0; i--)
    {
        rev.push_back(given[i]);
    }
    if (rev == lowen)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}