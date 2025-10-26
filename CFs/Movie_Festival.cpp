    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;cin>>n;
        vector<pair<int,int>>vp(n);
        for (int i = 0; i < n; i++)
        {
            int x,y;cin>>x>>y;
            vp[i]={x,y};
        }
        sort(vp.begin(), vp.end(), [&](const pair<int,int> &a, const pair<int,int> &b) {
            return a.second < b.second;
        });
        int cnt = 1, cur = vp[0].second;
        for (int i = 1; i < n; i++)
        {
            if(vp[i].first>=cur){
                cnt++;
                cur=vp[i].second;
            }
        }
        cout<<cnt<<endl;
        
        
        return 0;
    }