#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;

vector<bool> is_prime(N, true);

void seive(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i)
                is_prime[j] = false;
        }
    }
}
ll xcd(ll a,ll b){
    while(b){
        ll t=b;
        b=a%b;
        a=t;
    }
    return a;
}
ll isOK(ll x){
    for (ll p = 2; p < N; ++p) {
        if (is_prime[p] && x % p != 0)
            return p;
    }
    for (ll y = N; y <= 1e5 + N; ++y) {
        if (xcd(x, y) == 1)
            return y;
    }
    if (x == 1)
        return 2;
    return -1;
}
int main(){
    int t;
    cin>>t;
    seive();
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        ll x=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x=xcd(x,a[i]);
        }
        ll ans=isOK(x);
        cout<<ans<<endl;
    }
    return 0;
}
