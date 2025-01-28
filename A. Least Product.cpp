#include <iostream>
#include <cstdlib>
using namespace std;

int Scan_Arr(int arr[], int s)
{
    int ng;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            ng++;
        }
    }
    return ng;
}
int R_mul(int arr[], int s)
{
    int r;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            r *= arr[i];
        }
    }
    return r;
}

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int s, idx, k;
        cin >> s;
        int arr[s];
        int neg = Scan_Arr(arr, s);
        if (s == 1)
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
        else if (neg % 2 == 0)
        {
            int r = R_mul(arr, s);
            int r_not;
            for (int i = 0; i < s; i++)
            {
                if (arr[i] < 0)
                {
                    r_not *= abs(arr[i]);
                    idx = i;
                }
                r_not *= arr[i];
            }
            k++;
            if (r_not == r)
            {
                cout << k << endl;
                cout << idx << " " << 0 << endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}