#include <iostream>
using namespace std;
int main()
{
    int l;
    cin >> l;

    if (l == 1)
    {
        cout << "I hate ";
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (i % 2 == 0)
            {

                if (i == (l - 1))
                {
                    cout << "I hate ";
                }
                else
                {
                    cout << "I hate that ";
                }
            }
            else if (i % 2 != 0 && i != (l - 1))
            {
                cout << "I love that ";
            }
            else
            {
                cout << "I love ";
            }
        }
    }
    cout << "it\n";
    return 0;
}