#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cin >> str1;
    bool flag = false;
    int i = 0, j = str1.length();
    while (j != 0)
    {
        if (str1[i] == 'H' || str1[i] == 'Q' || str1[i] == '9')
        {
            flag = true;
            break;
        }
        i++;
        j--;
    }
    (flag == true) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}