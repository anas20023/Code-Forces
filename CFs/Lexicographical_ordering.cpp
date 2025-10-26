#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--){
     string a,s,t;cin>>a>>s>>t;
    if(s==t){
        cout<<"="<<endl;
    }
    else if(s>t){
        cout<<">"<<endl;
    }
    else{
        cout<<"<"<<endl;
    }
   }
    return 0;
}