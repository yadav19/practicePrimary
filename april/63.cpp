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
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,l=0,b=0,x,y;
    char q;
    cin>>t;

    for(int i =0;i<t;i++)
    {
        cin>>q>>x>>y;
        if(q =='+') l = max(l,max(x,y)), b=max(b,min(x,y));
        else
        {
            if(b <= min(x,y) && l <= max(x,y)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
