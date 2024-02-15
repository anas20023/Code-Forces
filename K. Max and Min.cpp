#include <iostream>
using namespace std;

int main()
{
    long long x, y, z, minn, maxx;
    cin >> x >> y >> z;
    maxx = max(x, max(y, z));
    minn = min(x, min(y, z));
    cout << minn << " " << maxx << endl;
    return 0;
}