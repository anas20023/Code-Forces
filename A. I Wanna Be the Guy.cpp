#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;
    int aa[a];
    set<int> s;
    for (int i = 0; i < a; i++)
    {
        cin >> aa[i];
        s.insert(aa[i]);
    }
    int b;
    cin >> b;
    int bb[b];

    for (int j = 0; j < b; j++)
    {
        cin >> bb[j];
        ;
        s.insert(bb[j]);
    }
    if (s.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    /*
         if (s1.size() == x)
          {
              cout << "I become the guy.\n";
          }
          else
          {
              cout << "Oh, my keyboard!\n";
          }
     */
    return 0;
}