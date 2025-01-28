#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> p;
    bool flag = false;
    for (int i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        p.push_back(temp);
    }
    for (int i = 0; i < p.size(); i++)
    {
        //cout << p[i] << " ";
         if (p[i] == 1)
         {
             flag = true;
         }
    }
    (flag == true) ? cout << "HARD\n" : cout << "EASY\n";

    return 0;
}