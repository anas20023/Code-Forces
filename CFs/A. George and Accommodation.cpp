#include <iostream>
using namespace std;

int main()
{
    int rooms, count = 0;
    cin >> rooms;
    for (int i = 1; i <= rooms; i++)
    {
        int s, c;
        cin >> s >> c;
        if ((c - s) >= 2)
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}