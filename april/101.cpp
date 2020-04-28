#include<bits/stdc++.h>
using namespace std;

#define fore(i,s,e) for(int i=s;i<e;i++)
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef pair<long long,long long> pll;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        vector<pll> a(n,pll());
        fore(i,0,n) scanf("%lld%lld",&a[i].ff,&a[i].ss);
        a.pb(a[0]);
        ll ans=0,mina=a[0].ff;
        fore(i,1,n+1)
        {
            ans+=max(1ll*0,a[i].ff-a[i-1].ss);
            mina = min(mina,a[i].ff);
            mina = min(mina,a[i].ss);
        }
        cout<<ans+mina<<endl;
    }
}
