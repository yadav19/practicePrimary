#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    long long ans=0;
    scanf("%lld%lld",&n,&m);
    if(m==1) ans = n*n;
    else for(int i=1;i<=m;i++) {for(int j=i;j<=m;j++) if((i*i+j*j)%m==0) ans+=(2-(i==j))*((n-i+m)/m)*((n-j+m)/m);}
    cout<<ans<<endl;
}