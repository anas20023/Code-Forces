#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n;cin>>n;
   vector<int>v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   int l=v[0]+1,r=v[n-1]-1,ans;
   if(r<l){
    ans = 0;
   }
   else{
    ans = r - l + 1;
   }
   cout<<ans<<endl;
   
   

}
int main() {
	int tc;cin>>tc;
	while(tc--){
        solve();
	}

}
