#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<int>> G(n,vector<int>(n,10000));
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf("%d %d: ",i,j);
            scanf("%d",&G[i][j]);
        }
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++) 
                G[i][j] = min(G[i][j],G[i][k]+G[k][j]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",G[i][j]);
        }
        printf("\n");
    }

}