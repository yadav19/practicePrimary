#include<bits/stdc++.h>
using namespace std;
int m;
long long fact(int n)
{
    if (n==1 || n==0) return 1;
    return (n*fact(n-1))%m;
}

int main()
{
    int n;
    scanf("%d%d",&n,&m);
    long long ans=0;
    for(int len=0;len<n;len++)
        (ans+=(n-len)*fact(len+1)*fact(n-len))%=m;
    cout<<ans<<endl;
}