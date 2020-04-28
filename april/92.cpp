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
    int n;
    cin>>n;

    if(n<6) cout<<-1<<endl;
    else if(n>=6)
    {
        cout<<"1 2\n1 3\n3 4\n3 5"<<endl;
        for(int i=6;i<=n;i++) cout<<1<<" "<<i<<endl;
    }
    floop(2,n+1) cout<<1<<" "<<i<<endl;
}