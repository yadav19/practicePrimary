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

ll ans;


inline void cal(vector<int> &a,vector<int> &b,vector<int> &c)
{
    for(auto x: a)
    {
        auto y = lower_bound(b.begin(),b.end(),x);
        auto z = upper_bound(c.begin(),c.end(),x);

        if(y == b.end() || z == c.begin()) continue;
        else z--,ans = min(ans,1ll*(x-*y)*(x-*y)+1ll*(x-*z)*(x-*z)+1ll*(*z-*y)*(*z-*y));
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ans = __LONG_LONG_MAX__;
        int r,g,bl;
        cin>>r>>g>>bl;
        vi a(r),b(g),c(bl);

        for(int i=0;i<r;i++) cin>>a[i];
        for(int i=0;i<g;i++) cin>>b[i];
        for(int i=0;i<bl;i++) cin>>c[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());

        cal(a,b,c);
        cal(a,c,b);
        cal(b,a,c);
        cal(b,c,a);
        cal(c,b,a);
        cal(c,a,b);

        cout<<ans<<endl;
    }
    return 0;   
}
