#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int netsum = 0;
    for (int i = 0; i < n; i++)
    {
        netsum += arr[i];
    }
    int before_sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        before_sum += arr[i];
        count++;
        if (before_sum > netsum - before_sum)
            break;
    }
    cout << count;
}