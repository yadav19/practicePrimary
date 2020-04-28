#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define MOD (int)1e9+7
#define floop(s,e) for(int i=e;i<e;i++)

typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<pair<int,int>> vpii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;

int c[(int)1e5+5];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    vi p(n);
    cin>>n;

    floop(0,n) cin>>p[i], p[i] = n-p[i], c[p[i]]++;

    ll caps =0;

    floop(1,n+1) caps+= c[i]/i;

    if(caps>n) cout<<"IMPOSSIBLE"<<endl; 


}