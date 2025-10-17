#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
       string s;cin>>s;
       int l=0,r=n-1;
       while(l<r){
        if(s[l]==s[r]){
            l++,r--;
        }
        else{
            break;
        }
       }
       //cout<<l<<" "<<r<<endl;
       if(l==r){
        cout<<0<<endl;
        //cout<<""<<endl;
       }
       else{
        // cout<<l+1<<" "<<r+1<<endl;
        if(s[l]>s[r]){
            
        }
        cout<<r-l+1<<endl;
        for (int i = l+1; i <=r+1; i++)
        {
            cout<<i<<" ";
        }
        
       }
       cout<<endl;
    }
    return 0;
}
