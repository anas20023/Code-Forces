#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;cin>>tc;
	while(tc--){
	    int n;cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++) cin>>v[i];
	    int z=0,o=0,t=0;
	    for(int i=0;i<n;i++){
	        if(v[i]==0) z++;
	        if(v[i]==1) o++;
	        if(v[i]==2) t++;
	    }
	    if (n% 2 == 0 && o <= n/2 && t <= n/2) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
	}

}
