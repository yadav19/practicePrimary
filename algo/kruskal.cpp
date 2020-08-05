#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,d,n,e;
    cin>>n>>e;
    vector<pair<int,pair<int,int>>> K(e);
    vector<int> ds(n+1,-1);
    vector<vector<int>> mst(n+1,vector<int>(n+1,0));
    
    for(int i=0;i<e;i++) cin>>x>>y>>d, K[i] = {d,{x,y}};
    
    sort(K.begin(),K.end());

    for(int i=0;i<e;i++)
    {
        x = K[i].second.first;
        y = K[i].second.second;
        d = K[i].first;

        if(ds[x] == -1 && ds[y]==-1) ds[x] = x,ds[y]=x,mst[y][x] = mst[x][y] = 1;
        else if( ds[x] ==-1) ds[x]=ds[y],mst[x][y] = mst[y][x] = 1;
        else if(ds[y]==-1) ds[y]=ds[x], mst[y][x] = mst[x][y] = 1;
        else
        {
            if(ds[x] != ds[y])
            {
                cout<<ds[x]<<" "<<ds[y]<<endl;
                int tmp = ds[y];
                for(int j=1;j<=n;j++) if(ds[j]==tmp) ds[j] = ds[x];
                mst[x][y] = mst[y][x] = 1;
            }
        }
    }

    for(auto i: mst) 
    {
        for(auto j:i) 
            cout<<j<<" "; 
        cout<<endl;
    }

}

/*
0 1 2
0 3 6
1 2 3
1 4 5
*/