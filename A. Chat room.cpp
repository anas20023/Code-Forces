#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string text, match = "hello";
    int l = 2;
    getline(cin, text);
    vector<char> v;
    bool chck = true;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'h' || text[i] == 'e' || text[i] == 'l' || text[i] == 'o')
        {
            v.push_back(text[i]);
        }
    }
    for (auto &val : v)
    {
        cout << val << " ";
    }
  // (chck == true) ? cout << "YES\n" : cout << "NO\n"; 

    return 0;
}