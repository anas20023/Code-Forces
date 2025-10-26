#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    for(int i = 0; i <n; ++i){
        if(n%(i+1)==0){
            reverse(s.begin(),s.begin()+i+1);
        }
    }
    cout<<s<<endl;
    return 0;
}