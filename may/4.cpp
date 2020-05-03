#include<bits/stdc++.h>
using namespace std;
int len;
int arr[205];

void build(int a,int b)
{
    len = a*b;
    for(int i=1;i<=len;i++)
    {
        arr[i] = arr[i-1];
        if((i%a)%b!=(i%b)%a) arr[i]++;
    }
}

long long query(long long i)
{
    long long cnt = i/len;
    long long rem = i%len;
    return arr[len]*1ll*cnt + arr[rem];   
}

long long query(long long l,long long r)
{
    return query(r) - query(l-1);
}

int main()
{
    long long a,b,l,r,q,t;
    long long ans=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&q);
        build(a,b);
        for(int i=0;i<q;i++)
        {
            scanf("%lld%lld",&l,&r);
            cout<<query(l,r)<<" ";
        }
        cout<<endl;
    }
}