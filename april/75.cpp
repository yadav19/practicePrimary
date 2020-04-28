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
    ll n;
    double p,ans=0;
    cin>>n;
    cin>>p;
    vector<double> t(n),l(n),a;
    floop(0,n) cin>>t[i],t[i]--;
    floop(0,n) cin>>l[i],l[i]--;
    floop(0,n) a.push_back(t[i]),a.push_back(l[(i+1)%n]);

    if(l[0] && t[0])
    {
        ans+=p/l[0];
        for(int i=n-1;i>0;i--)
        {
            if(t[i])
                ans+=(p+ans)/t[i];
            else
            {
                ans=-1;
                break;
            }

            if(l[i]) ans+=(p+ans)/l[i];
            else
            {
                ans=-1;
                break;
            }
        }
        if(ans>0)
            ans+=(p+ans)/t[0];
        else ans=-1;
    
    }
    else ans-=1;
    
    if(ans>0 || ans != INFINITY) printf("%.10f",ans);
    else cout<<-1<<endl;

}