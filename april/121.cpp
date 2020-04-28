#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    scanf("%d%d",&n,&m);
    if(n<=6) printf("%d",m);
    else
    {
        vector<vector<int>> d(8,vector<int>(8,0));
        for(int i=0;i<m;i++) scanf("%d%d",&a,&b),d[a][b]=1,d[b][a]=1;
        int mn = 21;
        for(int i=1;i<=7;i++)
        for(int j=1;j<=7;j++)
        {
            int x =0;
            for(int k=1;k<=7;k++) x+= d[i][k]&&d[k][j];
            mn = min(mn,x);
        }

        printf("%d",m-mn);        
    }
    
}