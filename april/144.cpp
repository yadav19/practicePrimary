#include<bits/stdc++.h>
using namespace std;
#define fore(i,s,e) for(long long i=s;i<e;i++)
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>> q(m+1,{0});
    vector<pair<long long,long long>> A(n,pair<long long,long long>());
    for(int i=0;i<n;i++)
    {    
        cin>>A[i].second;
        cin>>A[i].first;
    }
    
    sort(A.begin(),A.end(),greater<pair<long long,long long>>());
    
    for(int i=0;i<n;i++)
    {
        long long ind = A[i].second;
        q[ind].push_back(q[ind].back()+A[i].first);
    }

    long long ans =0;
    for(int i=1;i<=n;i++)
    {
        long long an=0;
        for(int j=1;j<=m;j++)
        {
            if(q[j].size()>i)
            if(q[j][i]>0) an+=q[j][i];
        }

        ans=max(ans,an);
    }

    cout<<ans<<endl;
}