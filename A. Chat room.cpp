#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    string s2 = "hello";

    cin >> s1;

    int j = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[j])
        {

            j++;
        }
    }
    if (j == 5)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}