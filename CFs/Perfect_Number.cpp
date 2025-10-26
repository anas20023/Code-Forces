#include <bits/stdc++.h>
using namespace std;

bool isOK(int i){
     int s=0;
        int tm=i;
        while(tm>0){
            s+=tm%10;
            tm/=10;
        }
       return s==10;
}
int main()
{
    int n;cin>>n;
    int l=1,r=2e7,ans=0;
    for (int i = l; i <=r; i++)
    {
        if(isOK(i)){
            ans++;
        }
        if(ans==n){
            cout<<i<<endl;
            break;
        }
    }

    
    return 0;
}