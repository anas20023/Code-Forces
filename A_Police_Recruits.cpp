#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    //cout<<"Parina"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int p=0,c=0;
    for (int i = 0; i < n; i++)
    {
        if(p==0 && arr[i]==-1){
            c++;
        }
        else if(p>0 && arr[i]==-1){
            p--;
        }
        else{
            p+=arr[i];
        }
    }
    cout<<c<<endl;
    
    return 0;
}