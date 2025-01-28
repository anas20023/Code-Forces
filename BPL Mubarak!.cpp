#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int over_done, ball = 0;
        string over;
        cin >> over;
        for (int i = 0; i < over.length(); i++)
        {
            if (over[i] == '0' || over[i] == '1' || over[i] == '2' || over[i] == '3' || over[i] == '4' || over[i] == '6' || over[i] == 'O')
            {
                ball++;
            }
        }
        int balls;
        balls = ball % 6;
        over_done = ball / 6;
        // cout << over_done << endl;
        // cout << balls << endl;
        if (balls == 0 && over_done != 0)
            if (over_done > 1)
                cout << over_done << " OVERS" << endl;
            else
                cout << over_done << " OVER" << endl;

        else if (over_done == 0 && balls != 0)
            if (balls > 1)
                cout << balls << " BALLS" << endl;
            else
                cout << balls << " BALL" << endl;
        else
            printf("%d %s %d %s\n", over_done, (over_done > 1) ? "OVERS" : "OVER",
                   balls, (balls > 1) ? "BALLS" : "BALL");
    }

    return 0;
}