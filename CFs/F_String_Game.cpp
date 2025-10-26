#include <bits/stdc++.h>
using namespace std;

bool isOK(vector<int>&v,int mid,const string &t,const string &p , int n){
    vector<bool>check(n,false);
    for (int i = 0; i < mid; i++)
    {
        int d=v[i]-1;
        check[d]=true;
    }
   // for(auto i:check) cout<<boolalpha<<i<<" ";
   int l=0,r=0;
   while(l<n && r<p.size()){
    if(!check[l] && p[r]==t[l]){
        r++;
    }
    l++;
   }
    return r==(int)p.size(); 
    //return 1;
}

int main()
{
    string t,p;cin>>t>>p;
    int n=t.size();
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l=0,r=n,ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(isOK(v,mid,t,p,n)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}