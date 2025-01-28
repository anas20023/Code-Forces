#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Line;
    getline(cin, Line);
    int sz, counter=0;
    sz = Line.length();
    char temp;
    //  cout<<temp;
    for (int i = 0; i < sz; i++)
    {
        if (Line[i] == temp)
        {

            counter++;
            temp = Line[i];
        }
        else
        {
            counter=0;
            temp = Line[i];
            counter++;
        }
        if (counter >= 7)
        {
            break;
        }
    }
    (counter >= 7) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}