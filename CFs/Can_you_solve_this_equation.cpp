#include <bits/stdc++.h>
using namespace std;

#define ll long long

double isOK(double mid){
    // double ans=8.0*pow(mid,4.0)+7.0*pow(mid,3.0)+3.0*pow(mid,2.0)+(3.0*mid)+6.0;
    double ans=8*mid*mid*mid*mid+7*mid*mid*mid+2*mid*mid+3*mid+6;
    return ans;
}

int main()
{
    int t;cin>>t;
    while(t--){
        double y;cin>>y;
        if(y<isOK(0) || y>isOK(100)){
            cout<<"No solution!"<<endl;
            continue;
        }
        double l=0,r=100;
        for (int i = 1; i <=60; i++)
        {
            double mid=l+(r-l)/2.0;
            if(isOK(mid)>=y){
               // ans=mid;
                r=mid;
            }
            else{
                l=mid;
            }
        }
        
        cout<<fixed<<setprecision(4)<<l<<endl;
    }
    return 0;
}