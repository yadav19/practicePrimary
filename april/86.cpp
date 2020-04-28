#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define MOD (int)1e9+7
#define floop(i,s,e) for(int i=s;i<e;i++)
 
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<pair<int,int>> vpii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
vi t[(int)1e5+5];
int v[(int)1e5+5];
ll ans;

ll dfs(int n)
{
    v[n]=1;
    ll size=0;
    for(int c: t[n])
    {
        if(!v[c]) size+=dfs(c);  
    }

    if(size%2==0) return size+1;
    ans++;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;

    int x,y;
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        t[x].push_back(y);
        t[y].push_back(x);
    }
    ll p;
    if(n%2) cout<<-1<<endl;
    else p = dfs(1),cout<<ans-1;
}