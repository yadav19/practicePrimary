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
    int n,m,k;
    cin>>n>>m>>k;
    
    vpii A(n);
    for(int i=0;i<n;i++) cin>>A[i].ff,A[i].ss = i;
    sort(A.begin(),A.end(),greater<pii>());
    
    vi B(m*k);
    ll sumb=0;
    for(int i=0;i<m*k;i++) sumb+=A[i].ff,B[i] = A[i].ss;

    sort(B.begin(),B.end());
    cout<<sumb<<endl;
    for(int i=0;i<k-1;i++) cout<<B[(i+1)*m-1]+1<<" "; 

    return 0;
}