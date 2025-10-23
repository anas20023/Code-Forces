#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    set<char>st;
    for(auto i:s){
        st.insert(i);
    }
    char sm=*(st.begin());
    if(k>n){
        string ans;
        ans.resize(k);
       for (int i = 0; i < n; i++)
       {
         ans[i]=s[i];
       }
       for (int i = n; i < k; i++)
       {
         ans[i]=sm;
       }
        cout<<ans<<endl;
    }else{
        for(int i = k-1; i >= 0; --i){
            auto it= st.upper_bound(s[i]);
            if(it!=st.end()){
                 string ans;
                ans.resize(k);
                ans[i]=*it;
                for (int j = 0; j < i; j++)
                {
                    ans[j]=s[j];
                }
                 for (int j = i+1; j < k; j++)
                {
                    ans[j]=sm;
                } 
                cout<<ans<<endl;
                return 0;
            }
              
            
        }
    }
    
    return 0;
}