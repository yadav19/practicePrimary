#include<bits/stdc++.h>
using namespace std;
const int N = (int)2e5 + 100;
vector<int> g[N];
char used[N];

void dfs(int v)
{
    used[v] = 1;
    for(int to: g[v]) if(!used[to]) dfs(to);
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(char c:s)
        {
            g[i].push_back(n+c-'a');
            g[n+c-'a'].push_back(i);
        }
    }

    long long ans=0;
    for(int i =n;i<n+ 26;i++)
    {
        if(g[i].size()>0 && !used[i] )
        {
            dfs(i);
            ans++;
        }
    }

    cout<<ans<<endl;
}