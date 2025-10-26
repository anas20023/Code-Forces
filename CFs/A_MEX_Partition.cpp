#include <bits/stdc++.h>
using namespace std;
int mex(vector<int> &arr, int N)
{


  sort(arr.begin(), arr.end());

  int mex = 0;
  for (int idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {

      mex += 1;
    }
  }
  return mex;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            // int x;cin>>x;
            // pq.push(x);
            cin>>v[i];
        }
        // if(pq.top()==0){
        //     cout<<1<<endl;
        //     continue;
        // }
        // cout<<pq.top()-1<<endl;
        cout<<mex(v,n)<<endl;
    }
    return 0;
}