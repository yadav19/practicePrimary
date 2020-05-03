    #include<bits/stdc++.h>
    using namespace std;
    vector<int> T[(int)2e5+5];
    int N[(int)2e5+5];
    int v[(int)2e5+5];
    int dfs(int c,int d)
    {
        v[c]=1;
        int ch =0;
        for(int i: T[c]) if(!v[i]) ch+=dfs(i,d+1);
        N[c] = ch-d;
        return ch+1;
    }
    int main()
    {
        int n,k,x,y;
        scanf("%d%d",&n,&k);
        for(int i=1;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            T[x].push_back(y);
            T[y].push_back(x);
        }

        int z = dfs(1,0);
        sort(N+1,N+n+1,greater<int>());
        long long ans=0;

        for(int i=1;i<=n-k;i++) ans+=N[i];
        cout<<ans<<endl;    
    }