#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
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

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n,x,k1,k2,k;
    cin>>n>>k1>>k2;
    k = k1+k2;
    vl a(n);
    priority_queue<ll> q;

    floop(0,n) cin>>a[i];
    floop(0,n)
    {
        cin>>x;
        q.push(abs(x-a[i]));
    }

    ll now;
    while(k--)
    {
        now = q.top();
        q.pop();
        q.push(abs(now-1));
    }
    ll ans=0;
    while(!q.empty())
    {
        ans+= q.top()*q.top();
        q.pop();
    }

    cout<<ans<<endl;
}