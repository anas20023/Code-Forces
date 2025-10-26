#include <bits/stdc++.h>
using namespace std;


int isOK(vector<int>&vp, int n ,int mid){
    return vp[mid];
}
int main()
{
    int n,q,c=0;
    while(1){
        cin>>n>>q;
        if(n==0 && q==0) break;


        vector<int>vp(n);
        for (int i = 0; i < n; i++)
        {
           cin>>vp[i];
        }
        sort(vp.begin(),vp.end());

        cout<<"CASE# "<<++c<<":"<<endl;
        for (int i = 0; i < q; i++)
        {
            int x,idx=-1;cin>>x;
            int l=0,r=n-1;
            while(l<=r){
                int mid=l+(r-l)/2;
               // cout<<mid<<endl;
                if(isOK(vp,n,mid)==x){
                    idx=mid;
                    r=mid-1;
                   // break;
                }
                else if(isOK(vp,n,mid)>x){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(idx==-1){
                cout<<x<<" not found"<<endl;
            }
           else{cout<<x<<" found at "<<idx+1<<endl;
           }
        }
        
        
    }
    return 0;
}