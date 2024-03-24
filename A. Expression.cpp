#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max_1 = a + (b * c); // 2
    int max_2 = a * (b + c); // 2
    int max_3 = a * b * c;   // 1
    int max_4 = (a + b) * c; // 2
    int max_5 = a + b + c;
    // cout << max_1 << max_2 << max_3 << max_4 << endl;
    priority_queue<int> x;
    x.push(max_1);
    x.push(max_2);
    x.push(max_3);
    x.push(max_4);
    x.push(max_5);
    cout << x.top() << endl;

    return 0;
}