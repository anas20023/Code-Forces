#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;cin>>n;
    long long tm=(n*(n+1)/2),ts=2*n;
   // cout<<ts<<" "<<tm<<endl;
    if(ts>=tm){
        cout<<-1<<endl;
        return;
    }
    // if(ts<=tm){
    //    //cout<<-1<<endl;
    //     return;
    // }
    cout<<(n*(n+1)/2)-1<<endl;

}
int main() {
	int tc;cin>>tc;
	while(tc--){
        solve();
	}

}
