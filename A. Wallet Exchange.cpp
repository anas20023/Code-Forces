#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    for (int i = 1; i <= t_case; i++)
    {
        int a, b;
        cin >> a >> b;
        while (1)
        {
            b--;
            int swap = b;
            a = b;
            a--;
            if (a == 0)
            {

                cout << "Alice" << endl;
                break;
            }
            if (b == 0)
            {

                cout << "Bob" << endl;
                break;
            }
        }
    }

    return 0;
}