#include <iostream>

using namespace std;

int main()
{

    int k,n,w,total=0,out;
    cin>>k>>n>>w;

    for(int i=1 ; i <=w ; i++ )
    {
        total+=k * i;
    }
    out=total-n;
    if(total > n)
    {

        cout<<out<<endl;
    }
    else{
        cout<<0;
    }
}
