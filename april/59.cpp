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

inline ll factor(ll n)
{
    ll s=sqrt(n);
    if(n%2)for(int i=3;i<=s;i+=2){if(n%i==0)return n/i;}
    else return n/2;
    return 1;
}

int main()
{
    int n;
    ll a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        ll ans =0;
        ans = 1<<(int)(log(a)/log(2))+1;
        if(a&(a+1)) cout<<ans-1<<endl;
        else cout<<factor(a)<<endl;
    }
}
