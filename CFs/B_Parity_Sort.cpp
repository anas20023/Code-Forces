#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        int e=0,o=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]%2) o++;
            else e++;
        }
        if(is_sorted(v.begin(),v.end())){
            cout<<"YES"<<endl;
            continue;
        }
        if((e%2==0&&e>=2) && (o%2==1&&o>2)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}