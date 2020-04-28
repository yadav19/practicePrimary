#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define pb push_back
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
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;

    string in;
    map<ll,ll> L,R;
    ll R2=0;
    int t=0,tt;

    floop(i,0,n)
    {
        cin>>in;
        t=0,tt=0;
        for(char s: in) 
        if(s=='(') t++,tt++;
        else if(tt) tt--;
        
        if(2*t == in.size() && !tt) R2++;
        else if (2*t>in.size() && 2*t-in.size()==tt) L[2*t-in.size()]++;
        else if (2*t<in.size()&& tt==0) R[in.size()-2*t]++;
    }
    ll ans= R2*R2;
    for(auto i:L) if(R[i.ff]>0) ans+= i.ss*R[i.ff];
    cout<<ans;
}