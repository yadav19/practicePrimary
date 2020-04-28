#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define MOD (int)1e9+7

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
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    ll ans=1;
    ll temp=0;

    for(char c: s) if(c == 'a') temp++; else if(c == 'b') ans=(1ll*ans*++temp)%1000000007,temp=0;
    
    ans=(1ll*ans*++temp)%1000000007;
    cout<<(ans-1)%1000000007<<endl;
}