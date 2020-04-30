#include<bits/stdc++.h>
using namespace std;

long long pf(int n)
{
    long long s=1;
    for(int i=0;i<n;i++)(s*=2)%=1000000007;
    return s;
}

int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    string s;
    cin>>s;
    for(int _i=0;_i<q;_i++)
    {
        int o=0,z=0;
        int l,r;
        scanf("%d%d",&l,&r);
        for(int i=l-1;i<r;i++) if(s[i]=='1')o++;else z++;
        long long ans = (pf(o)-1)*pf(z);
        cout<<ans<<endl;
    }
}