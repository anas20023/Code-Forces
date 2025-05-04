#include <iostream>
#include <vector>
#include <algorithm>
#define anas int
#define nilam cin
#define dilam cout
using namespace std;

int main()
{
    anas x;
    nilam >> x;
    vector<anas> p(x);
    for (anas i = 0; i < x; i++)
    {
        nilam >> p[i];
    }
    // p.sort();
    sort(p.begin(), p.end());
    for (anas i = 0; i < x; i++)
    {
        dilam << p[i] << " ";
    }
    return 0;
}