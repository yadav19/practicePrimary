#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back;

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
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n,m,t,d;
    priority_queue<pll,vector<pll>,greater<pll>> Q;
    cin>>n>>m;
    vl a(n+1),c(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) cin>>c[i],Q.push({c[i],i});
    for(ll i=0;i<m;i++)
    {
        cin>>t>>d;

        if(d<=a[t])
        {
            a[t]-=d;
            cout<<1ll*d*c[t]<<endl;
        }
        else
        {
            bool flag = false;
            ll temp=0;

            temp+=a[t]*c[t];
            d-=a[t];
            a[t]=0;

            while(!Q.empty())
            {
                while(!Q.empty()) if(a[Q.top().ss]==0) Q.pop();else break;
                if(Q.empty()) break;
                if(d<=a[Q.top().ss])
                {
                    temp+=c[Q.top().ss]*d;
                    a[Q.top().ss]-=d;
                    flag = true;
                    break;
                }
                else
                {
                    temp+=c[Q.top().ss]*a[Q.top().ss];
                    d-=a[Q.top().ss];
                    a[Q.top().ss]=0;
                    Q.pop();
                }
                
            }

            if(flag) cout<<temp<<endl;
            else cout<<0<<endl;
        }
        
    }

}