#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int>mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for(auto &[f,s]:mp){
        if(k<=0){
            break;
        }
        if(s>k){
            s-=k;
            k=0;
        }
        else{
            k-=s;
            s=0;
        }
    }
    // for(auto &[f,s]:mp){
    //     cout<<f<<" "<<s<<endl;
    // }
    string ans;
    for (int i = n-1; i >=0; i--)
    {
        if(mp[s[i]]>0){
            ans.push_back(s[i]);
            //cout<<s[i]<<" ";
            mp[s[i]]--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}