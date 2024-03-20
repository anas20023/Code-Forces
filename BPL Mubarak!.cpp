#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int over_done = 0, ball = 0;
        string over;
        cin >> over;
        for (int i = 0; i < over.length(); i++)
        {
            if (over[i] == '0' || over[i] == '1' || over[i] == '2' || over[i] == '3' || over[i] == '4' || over[i] == '5' || over[i] == '6' || over[i] == 'O')
            {
                ball++;
            }
            if (ball > 6)
            {
                over_done++;
                // ball = 0;
            }
        }
        if (ball < 6 && over_done == 0)
        {
            cout << ball << " BALLS\n";
        }
        else if (ball == 6)
        {
            cout << 1 << " OVER\n";
        }
        else
        {
            if (ball == 1)
                cout << over_done << " OVER " << ball << " BALL\n";
            else
                cout << over_done << " OVER " << ball << " BALLS\n";
        }
    }

    return 0;
}