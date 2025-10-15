#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<string>vs(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vs[i];
    }
    sort(vs.begin(),vs.end(),[&](string a, string b){
        return a+b < b+a;
    });
    for(auto i:vs) cout<<i;
    cout<<endl;
    
    return 0;
}