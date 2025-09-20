#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while(tc--){
        string s;cin>>s;
        int a=0,b=0,c=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='A') a++;
            if(s[i]=='B') b++;
            if(s[i]=='C') c++;
        }
        if(b==a+c) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}