#include<bits/stdc++.h>
using namespace std;

#define fore(i,s,e) for(int i=s;i<e;i++)
long long depth[(int)1e6+1];
vector<int> p[(int)1e6+1];
long long ans,c;
void dfs(int c,int d)
{
    for(int n: p[c])
    {
        depth[d+1]++;
        dfs(n,d+1);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1,1);
    a[0]=a[1]=1;

    fore(i,2,n+1)
    {
        cin>>c;
        p[c].push_back(i);
    }
    dfs(1,0);
    fore(i,0,n) ans+=depth[i]%2;
    cout<<ans+1<<endl;
    return 0;
}