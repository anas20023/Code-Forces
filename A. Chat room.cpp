#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    vector<char> v;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'h' || text[i] == 'e' || text[i] == 'l' || text[i] == 'o')
        {
            v.push_back(text[i]);
        }
    }

    return 0;
}