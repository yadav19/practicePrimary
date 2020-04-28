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
    int n,k,p1,p2;
    cin>>n>>k;
    vi a(n+1,0),b(n+1,0),ans(n+1,0);
    floop(1,n+1)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++) ans[i]=lower_bound(b.begin(),b.end(),a[i]) - b.begin()-1; 

    for(int i=0;i<k;i++)
    {
        cin>>p1>>p2;
        if(a[p1]>a[p2]) ans[p2]--;
        else if(a[p1] < a[p2]) ans[p1]--;
    }

    for(int i:ans ) cout<<i<<" ";

}