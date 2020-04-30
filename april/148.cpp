#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    long long x,ans=0;
    scanf("%d%d",&n,&m);
    vector<int> rr(n),cc(m);
    vector<int> r(n+1,INT_MAX);
    vector<int> c(m+1,INT_MAX);
    for(int i=0;i<n;i++) scanf("%d",&rr[i]);
    for(int i=0;i<m;i++) scanf("%d",&cc[i]);
    for(int i=0;i<n;i++)
        for(int j=i,current=rr[i];j<n;current+=rr[++j])
            r[j-i+1]=min(r[j-i+1],current);
    for(int i=0;i<m;i++)
        for(int j=i,current=cc[i];j<m;current+=cc[++j])
            c[j-i+1]=min(c[j-i+1],current);
    scanf("%lld",&x);
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) if(1ll*r[i]*c[j]<=x) ans=max(ans,1ll*i*j);
    cout<<ans<<endl;
}