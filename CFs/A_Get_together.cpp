#include <bits/stdc++.h>
using namespace std;


bool isOK(vector<int>&x,vector<int>&v,double t,int n ){
    double L = -1e18, R = 1e18;
        for (int i = 0; i < n; ++i) {
            double li = x[i] - v[i] * t;
            double ri = x[i] + v[i] * t;
            L = max(L, li);
            R = min(R, ri);
        }
        return L <= R;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>d(n),v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>d[i]>>v[i];

    }


    double l=0,r=1e9,ans=0;
  for (int i = 0; i < 100; i++)
  {
     double mid=(l+r)/2.0;
       // cout<<mid<<endl;
        if(isOK(d,v,mid,n)){
            ans=mid;
            r=mid;
        }else{
            l=mid;
        }
  }
  
       
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}