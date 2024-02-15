#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string text, match = "hello";
    getline(cin, text);
    vector<char> v;
    bool chck = true;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'h' || text[i] == 'e' || text[i] == 'l' || text[i] == 'o')
        {
            v.push_back(text[i]);
            if (text[i] == text[i + 1])
            {
                v.pop_back();
            }
        }
    }G. Summation from 1 to N
    for (int i = 0; i < text.length(); i++)
    {
        if (v[i] != text[i])
        {
            chck = false;
        }
    }
    (chck != true) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}