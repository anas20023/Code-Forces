#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tst_case;
    int n, m = 0;
    cin >> tst_case;
    for (int i = 1; i <= tst_case; i++)
    {
        int n;
        string a, b, c;
        cin >> n;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (b[i] != c[i] && a[i] != c[i])
                {
                    m = 1;
                }
            }
        }
    }
    if (m == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}