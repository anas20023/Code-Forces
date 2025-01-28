#include <iostream>
using namespace std;

int main()
{
    double a, b, total;
    cin >> a >> b;
    total = ((b * 100) / (100 - a));
    printf("%0.2lf\n", total);
    return 0;
}