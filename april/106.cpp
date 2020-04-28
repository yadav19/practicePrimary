#include<bits/stdc++.h>
using namespace std;

#define fore(i,s,e) for(long long i=s;i<e;i++)

int main()
{

    long long n,m;
    scanf("%lld%lld",&n,&m);
    long long mex =0,x;
    vector<long long> mx(m,0);
    vector<long long> p(n+1,0);
    fore(i,0,n)
    {
        scanf("%lld",&x);
        p[(mx[x%m]*m+x%m)%n]=1;
        mx[x%m]++;
        if(mex%m == x%m) fore(j,mex+1,n+1) if(!p[j]){mex = j;break;}
        cout<<mex<<endl;
    }

    return 0;
}