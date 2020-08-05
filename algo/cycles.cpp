#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> ds(n+1,0);
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        if(ds[x]==0 && ds[y]==0) ds[x]=-x,ds[y]=x;
        else if (ds[x]==0) if(ds[y]>0) ds[x]=ds[y]; else ds[x]=y;
        else if(ds[y]==0) if(ds[x]>0) ds[y]=ds[x]; else ds[y]=x;
        else
        {
            if(ds[x]==ds[y] || ds[x] == y || ds[y]==x) cout<<"cycle found"<<endl;
            else
            {
                int tmp = ds[y];
                for(int j=1;j<=n;j++) if(ds[j]==tmp) ds[j]=ds[x];
            }
        }
        for(int j=1;j<=n;j++) cout<<ds[j]<<" ";cout<<endl;
    }
}