#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    int Points[4][2], w_2, w_1, l_2, l_1;
    for (int i = 0; i < t_case; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> Points[i][j];
            }
        }
        w_2 = Points[0][0];
        l_2 = Points[0][1];
        for (int i = 0; i < 3; i++)
        {
            if (Points[i][0] < Points[i + 1][0])
            {
                w_2 = Points[i + 1][0];
            }
            else
            {
                w_1 = Points[i + 1][0];
            }
            if (Points[i][1] < Points[i + 1][1])
            {
                l_2 = Points[i + 1][1];
            }
            else
            {
                l_1 = Points[i + 1][1];
            }
        }
        float area = max(0, (l_2 - l_1) * (w_2 - w_1));
        cout << area << "\n";
    }

    return 0;
}