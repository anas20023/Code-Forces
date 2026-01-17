#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        string s,t;cin>>s>>t;
        map<char,int>mpt;
        for (int i = 0; i < (int)t.size(); i++)
        {
            mpt[t[i]]++;
        }
        bool isok=true;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if(mpt[s[i]]<1){
                isok=false;
                break;
            }
        }
        if(!isok){
            cout<<"Impossible"<<endl;
        }else{
        cout<<t<<endl; 

        }
        sort(t.begin(),t.end());
        // int l=0,r=0;
        // string ans;
        // while (l<s.size() || r<t.size())
        // {
        //     if(s[l]<=t[r]){
        //         ans.push_back(s[l]);
        //         l++;
        //     }else{
        //         ans.push_back(t[r]);
        //         r++;
        //     }
        // }
    }
    return 0;
}