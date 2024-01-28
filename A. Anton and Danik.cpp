#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char term[n];
    for (int i = 0; i < n; i++)
    {
        cin >> term[i];
    }
    int c_ta = 0, c_da = 0;
    for (int i = 0; i < n; i++)
    {
        if (term[i] == 'A')
        {
            c_ta++;
        }
        else if (term[i] == 'D')
        {
            c_da++;
        }
    }
    if (c_ta > c_da)
    {
        cout << "Anton\n";
    }
    else if (c_ta < c_da)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}