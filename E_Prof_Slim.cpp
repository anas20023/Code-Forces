#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int ps=0;
    vector<int>v(n),c(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]>0) ps++;
        c[i]=abs(v[i]);
    }
    int ng=n-ps;
    bool ok=true;
    for (int i = 0; i < ng-1; i++)
    {
        if(c[i]<c[i+1]){
            ok=false;
            break;
        }
    }
    if(ok){
        for (int i = ng; i <n-1; i++)
        {
            if(c[i]>c[i+1]){
                ok=false;
                break;
            }
        }
        
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}