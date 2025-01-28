#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str_2;
    cin >> str1 >> str_2;
    int len = str1.length();
    char str_fin[len];
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == str_2[i])
        {
            str_fin[i] = '0';
        }
        else
        {
            str_fin[i] = '1';
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << str_fin[i];
    }

    return 0;
}