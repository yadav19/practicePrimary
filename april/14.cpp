#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n,m;
    cin>>n>>m;

    vector<long long> S(n),B(m);

    for(long long i=0;i<n;i++) cin>>S[i];
    sort(S.begin(),S.end());
    long long sum=0;
    for(long long i=0;i<n;i++)
    cout<<(sum+=B[i%m]+=S[i])<<" ";
    return 0;
}