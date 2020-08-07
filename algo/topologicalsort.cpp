#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> G(6);
vector<int> V(6,0);
stack<int> S;
void dfs(int e)
{
    V[e] = 1;
    cout<<e<<endl;
    for(auto i:G[e]) if(V[i] == 0) dfs(i);
    S.push(e);
}

int main()
{
    G[5].push_back(2);
    G[5].push_back(0);
    G[4].push_back(1);
    G[4].push_back(0);
    G[2].push_back(3);
    G[3].push_back(1);
    for(int i=0;i<6;i++) if(!V[i]) dfs(i);
    while(!S.empty()) cout<<S.top()<<" ",S.pop();
}