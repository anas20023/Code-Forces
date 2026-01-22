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
        // vector
        int odd=-1;
        for (int i = 0; i < n; i++)
        { 
          if(v[i]&1){
            odd=v[i];
            break;
          }  
        }
        if(odd==-1){
            cout<<v[0]<<" "<<v[1]<<endl;
            continue;
        }
        bool isok=false;
        for (int i = 0; i < n; i++)
        {
            if(v[i]>odd && ((v[i]%odd)%2==0)){
                isok=true;
                cout<<odd<<" "<<v[i]<<endl;
                break;
            }
        }
        if(!isok) cout<<-1<<endl;    
    }
    return 0;
}