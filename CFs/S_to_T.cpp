#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int TC;cin>>TC;
    while(TC--){
        int n;cin>>n;
        string S,T;cin>>S>>T;

        if(S[0]!=T[0]){
        cout<<-1<<"\n";
        continue;
        }

        int p = -1;
        for(int i=0;i<n;i++) if(S[i]=='1'){p=i;break;}
        if(p==-1){
            cout<<(S==T?0:-1)<<"\n";
            continue;
        }


        vector<int> ops;
        for(int j=p;j<n-1;j++){
            if(S[j+1]=='0'){
                ops.push_back(j+1);
                S[j+1]='1';
            }
        }

        for(int i=1;i<n;i++){
            if(S[i]!=T[i]){
                ops.push_back(i);
                S[i]=(S[i]=='0'?'1':'0');
            }
        }
        
        cout<<ops.size()<<"\n";
        for(int x:ops) cout<<x<<" ";
        if(!ops.empty()) cout<<"\n";
    }
    return 0;
}
