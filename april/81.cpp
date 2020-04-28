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
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vi a(2*n),v(2*n,1);
    floop(0,2*n) cin>>a[i];
    ll ans=0;
    for(int i=0;i<2*n;i++)
    {
        if(v[i])
        {
            v[i]=0;
            for(int j=i+1;j<2*n;j++)if(a[i] == a[j]){v[j] =0;break;} else ans+=v[j];
        }
    }
    cout<<ans<<endl;
}