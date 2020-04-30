#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int> t[100005];

int dfs(int c)
{
    int x =0;
    for(int i:t[c]) x+=dfs(i);
    if(x==0) x=1;
    ans.push_back(x);
    return x;
}

int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&a);
        t[a].push_back(i);
    }
    int p = dfs(1);
    sort(ans.begin(),ans.end());
    for(int i:ans) cout<<i<<" ";
}