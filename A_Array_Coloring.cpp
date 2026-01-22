#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        bool isok=true;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i]%2 == v[i+1]%2){
                isok=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(isok) cout<<"YES"<<endl;
        
    }
    return 0;
}