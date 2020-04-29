#include<bits/stdc++.h>
using namespace std;

#define fore(i,s,e) for(int i=s;i<e;i++)

int  main()
{
    int n;
    scanf("%d",&n);
    vector<pair<int,int>> k(n+1,pair<int,int>());
    fore(i,1,n+1)cin>>k[i].first>>k[i].second;
    vector<int> ans(n+1);
    ans[1]=1;
    if (k[k[1].first].first == k[1].second || k[k[1].first].second == k[1].second) ans[2] = k[1].first,ans[3]=k[1].second;
    else ans[2] = k[1].second,ans[3]=k[1].first;

    for(int i=2;i<n-2+1;i++)
    {
        if(k[ans[i]].first == ans[i+1]) ans[i+2] = k[ans[i]].second;
        else ans[i+2] = k[ans[i]].first;
    }

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";

}   