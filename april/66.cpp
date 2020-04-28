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
    cin.tie(0);
    cout.tie(0);
    ll n ,r;
    cin>>n>>r;

    floop(1,n+1) cin>>h[i];

    ll ans=0;
    ll p=0;
    for(int i=min(n,r);i>0;i--)
    {
        if(h[i])
        {
            ans++;p=i;break;
        }
    }

    if(ans)
    {
        bool flag =1;
        while(flag && p+r<=n)
        {
            flag=0;
            for(int i=min(n,p+2*r-1);i>p;i--)
            {
                if(h[i])
                {
                    p=i;
                    ans++;
                    flag = 1;
                    break;
                }
            }
        }

        if(p+r>n) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}