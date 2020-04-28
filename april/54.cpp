#include<bits/stdc++.h>
using namespace std;
#define MOD (int)1e9+7
#define N (int)1e6+5
#define ll long long 

vector<int> G[N];
ll v[N],k,n,num;

inline ll p(ll x){int t=1;for(int i=0;i<k;i++)(t*=x)%=MOD;return t;}
void dfs(int y)
{
    v[y] =1;
    num++;

    for(int x:G[y] ) if(!v[x]) dfs(x);

}
int main()
{
    int x,y,c;
    cin>>n>>k;

    for(int i=1;i<n;i++)
    {
        cin>>x>>y>>c;
        if(!c) G[x].push_back(y), G[y].push_back(x);
    }
    
    ll ans = p(n);
    for(int i=1;i<=n;i++)
    {
        if(!v[i])
        {
            num =0;
            dfs(i);
            (ans-=p(num))%=MOD;
        }
    }

    
    cout<<ans%MOD<<endl;
}
