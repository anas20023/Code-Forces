#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        string s,t;cin>>s>>t;
        string st;
        map<char,int>mp;
        for (int i = 0; i < (int)t.size(); i++)
        {
            mp[t[i]]++;
            if(mp[t[i]]<=1) st.push_back(t[i]);
            // st.insert(t[i]);
        }
        if(st.size()==1){
            cout<<0<<endl;
            continue;
        }
        int c=0;
for (int i = 0; i < (int)st.size()-1; i++)
{
   // cout<<st[i+1]-'a'+1<<st[i]-'a'+1<<endl;
    c+=abs((st[i+1]-'a'+1)-(st[i]-'a'+1));
}

        cout<<c<<endl;
    }
    return 0;   
}