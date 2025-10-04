#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll kth_child(ll n, ll k){
    if(n==1) return 1;
    if(k<=n/2){
        return 2*k;
    }
    ll tm=kth_child((n-(n/2)),(k-(n/2)));
    if(n%2==0){
        return 2*tm-1;
    }
    else{
        if(tm==1){
            return n;
        }else{
            return 2*tm-3;
        }
    }
}
int main()
{
    int q;cin>>q;
    while(q--){
        ll n,k;cin>>n>>k;
        cout<<kth_child(n,k)<<endl;
    }
    return 0;
}