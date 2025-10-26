#include <bits/stdc++.h>
using namespace std;

int n,k;


vector<int>v;

bool isOK(int m){
    //cout<<m<<endl;
    int s=1,st=v[0];
    for (int i = 1; i < n; i++)
    {
        if(v[i]-st>=m){
            s++;
            st=v[i];
        }
    }
    
    return s>=k;
    
}

int main()
{
    cin>>n>>k;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int ans=0,l=0,r=1e9;
    while(l<=r){
        int mid=l+(r-l)/2;
        
        if(!isOK(mid)){
            
            r=mid-1;
        }
        else{
            l=mid+1;
            ans=mid;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}