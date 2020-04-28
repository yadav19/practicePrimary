#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define pb push_back
#define MOD (int)1e9+7
#define floop(s,e) for(int i=s;i<e;i++)
 
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<pair<int,int>> vpii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
 
int h[1005];
 
int main()
{
    ios::sync_with_stdio(false);
    int n,m,d,a;
    cin>>n>>m>>d;
    d++;
    vector<pll> c(n);
    floop(0,n) cin>>c[i].ff,c[i].ss=i;
    sort(c.begin(),c.end());
    int cnt=0;
    int ans[n];
    int vis[n];
    int dd;
    memset(vis,1,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        if(vis[i])
        {
            vis[i]=0;
            ans[c[i].ss] = ++cnt;
            dd = c[i].ff;
            for(int j=i+1;j<n;j++) if(vis[j] && c[j].ff >= dd+d) vis[j]=0, ans[c[j].ss]=cnt, dd = c[j].ff;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}

