#include<bits/stdc++.h>
using namespace std;
long long binexpo(long long b,long long e)
{
    long long result=1;
    while(e>0)
    {
        if(e&1) result*=b;
        b*=b;
        e>>=1;
    }
    return result;
}
int main()
{
    long long x,y;
    cin>>x>>y;
    cout<<binexpo(x,y);
}