#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <deque>
#include <list>
#include <limits.h>
#define ll long long
#define endl "\n"
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    Fast_io();
    // cout<<"Hello World !!";
    string s1;
    getline(cin, s1);
    for(int i = 0; i < s1.length(); i++){
 
        if(s1.find("WUB") != std::string::npos){
            s1.insert(s1.find("WUB")," ");
            s1.erase(s1.find("WUB"),3);
        }
 
    }
 
    while(1){
 
        if(s1[0] == ' ')
            s1.erase(0,1);
        else
            break;
 
    }
    cout << s1;

    return 0;
}
