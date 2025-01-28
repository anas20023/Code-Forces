#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string str1;
        cin >> str1;
        int c_a = 0, c_b = 0;
        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] == 'A')
                c_a++;
            else if (str1[i] == 'B')
                c_b++;
        }
        if (c_a > c_b)
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }

    return 0;
}