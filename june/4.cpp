#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,x,y;
        vector<vector<pair<int,int>>>  pts;
        cin>>n>>c;
        cin>>x>>y;
        pts.push_back(vector<pair<int,int>>(1,{x,y}));
        for(int i=n-1;i;i--)
        {
            int z=0;
            cin>>x>>y;
            while(z<pts.size())
            {
                if(pts[z][0].first-x == pts[z][0].second-y && (pts[z][0].first-x)%c==0 && (pts[z][0].second-y)%c==0) pts[z].push_back({x,y});
                else pts.push_back(vector<pair<int,int>>(1,{x,y}));
                z++;
            }
        }

        if(pts.size()==n) cout<<n<<" "<<n<<endl;
        else 
    }
}