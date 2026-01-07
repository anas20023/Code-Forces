#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n),b(n);
        int x=0,y=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            // if(a[i]==0)x++;
            // else y++;
            x^=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            // if(b[i]==0)p++;
            // else q++;
            x^=b[i];
        }
        if(!x){
            cout<<"Tie"<<endl;
            continue;
        }
        // int ansa=abs(x-y),ansb=abs(p-q);
        // cout<<ansa<<" "<<ansb<<endl;
        int bt=0;
        for (int i = 0; i < 20; i++)
        {
            if(x&1<<i){
                bt=i;
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if((a[i]^b[i])&1<<bt){
                y=i;
            }
        }
        if(y&1) cout<<"Mai"<<endl;
        else cout<<"Ajisai"<<endl;
        
        
        
    }
    return 0;
}