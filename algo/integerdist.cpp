
#include<bits/stdc++.h>
using namespace std;
#define inf  __LONG_LONG_MAX__
#define ll long long
int main()
{
    int n;
    scanf("%d",&n);
    vector<ll> a(n+5);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
	vector<ll> dp1(1<<n,1ll*0);
	vector<ll> dp2(1<<n,1ll*0);
	int last = (1<<n)-1;
	for(int i=0;i<=last;i++)
	{
		if(__builtin_popcount(i)==2)
		{
			for(int j=0;j<n;j++)
			if(i&(1<<j)) 
			{
				dp1[i]=dp1[i]^a[j];
				dp2[i]=dp1[i];
			}
		}
		else dp1[i]=inf;
	}
	for(int i=1;i<=last;i++)
	{
		bool f=0;
		if(!(__builtin_popcount(i)&1))
		{
			int x,mask;
			for(int j=0;j<n;j++)
			{
				if(!f && !(i&(1<<j))) 
				{
					f=1;
					x=a[j];
					mask=i|(1<<j);
				}
				else if(f && !(i&(1<<j)))
				{
					dp1[mask|(1<<j)] = min(dp1[mask|(1<<j)],dp1[i]+(x^a[j]));
					dp2[mask|(1<<j)] = max(dp2[mask|(1<<j)],dp2[i]+(x^a[j]));
				}
			}
		}
	}

	cout<<dp1[last]<<" "<<dp2[last];
}




















// #include<bits/stdc++.h>
// #define inf 1e18
// #define ll long long
// using namespace std;
// ll dp1[1100005],dp2[1100005];
// int main()
// {
// 	int n;
// 	cin>>n;
// 	assert(n>=1 && n<=20);
// 	assert(!(n&1));
// 	ll a[25];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		assert(a[i]>=0 && a[i]<=2147483647);
// 	}
// 	int lim=(1<<n)-1;
// 	for(int i=0;i<=lim;i++)
// 	{
// 		dp1[i]=0;bool f=0;
// 		if(__builtin_popcount(i)==2)
// 		{
// 			int x,mask;
// 			for(int j=0;j<n;j++)
// 			{
// 				if(i & (1<<j)){
// 					dp1[i]=dp1[i]^a[j];dp2[i]=dp1[i];
// 				}
// 			}
// 		}
// 		else {dp1[i]=inf;}
// 	}
// 	for(int i=1;i<=lim;i++)
// 	{
// 		bool f=0;
// 		int cnt=__builtin_popcount(i);
// 		if(!(cnt & 1))
// 		{
// 			int x,mask;
// 			for(int j=0;j<n;j++)
// 			{
// 				if(!f && !(i & (1<<j)))
// 				{
// 					f=1;x=a[j];mask=i|(1<<j);
// 				}
// 				else if(f && !(i & (1<<j)))
// 				{
// 					dp1[mask|(1<<j)]=min(dp1[mask|(1<<j)],dp1[i]+(x^a[j]));
// 					dp2[mask|(1<<j)]=max(dp2[mask|(1<<j)],dp2[i]+(x^a[j]));
// 				}
// 			}
// 		}
// 	}
// 	cout<<dp1[lim]<<" "<<dp2[lim]<<"\n";
// 	return 0;
// }

/*
/*
Pradyumn Sinha 
Delhi Technological University
#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii >
#define vll vector<pll>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pi 3.14159265358979
#define EL printf("\n")
#define OK printf("OK");
#define foreach(i,t) for(auto i =t.begin();i!=t.end();i++) 
#define pii pair<int,int>
#define pdn(n) printf("%d\n",n)
#define pln(n) printf("%lld\n",n)
#define psn(n) printf("%s\n",n)
#define pcn(n) printf("%c\n",n)
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%d",&n)
#define ss(n) scanf("%s",&n)
#define pn printf("\n")
#define  omap unordered_map
#define SZ(x) ((int)(x.size()))
#define foi(i,a,n) for(int (i)=int(a);(i)<=int(n);++(i))
#define fod(i,a,n) for(int (i)=int(a);(i)>=int(n);--(i))
#define PI 3.14159265
#define inf 1e18
#define mod 1000000007
#define precise(n,k) fixed<<setprecision(k)<<n
#define DBG(c) cout << #c << " = " << c << endl;
#define RTIME ((double)clock()/(double)CLOCKS_PER_SEC)
#define fequal(a,b) (fabs(a - b)<(1e-9))
int toint(const string &s) { stringstream ss; ss << s; int x; ss >> x; return x; }
string tostring ( int number ){  stringstream ss; ss<< number; return ss.str();}
typedef long long ll;
typedef long double lf;
ll pw(ll a,ll b) 
{if(b==0) return 1; if(b==1) return a;  ll ans=pw(a,b/2); if(b&1) 
return (((ans*ans)%mod*a)%mod); 
 return (ans*ans)%mod; }	
ll gcd(ll a,ll b){return (b==0)? a:gcd(b,a%b); }
void nope(int dec = 0){if(!dec) cout<<"NO"<<endl;else cout<<"YES"<<endl;exit(0);}
pll dp[1500000];
ll arr[20];
int n;
pll solve(int mask)
{		
	if(mask+1==(1<<n))
		return {0,0};
	if(dp[mask].fi!=-1)
		return dp[mask];
	pll ans={1e16,-1e16};
	for(int i=0;i<n;i++)
		if(!(mask&(1<<i)))
		{
			mask|=(1<<i);
			for(int j=i+1;j<n;j++)
				if(!(mask&(1<<j)))
				{
					pll next=solve(mask|(1<<j));
					ans.fi=min(ans.fi,(arr[i]^arr[j])+next.fi);
					ans.se=max(ans.se,(arr[i]^arr[j])+next.se);
				}
		mask-=1<<i;
		break;
		}
	return dp[mask]=ans;
}
int main()
{
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int mask=0;mask<(1<<n);mask++)
		dp[mask]={-1,-1};
	pll ans=solve(0);
	cout<<ans.fi<<" "<<ans.se;
	
	return 0;
}
*/