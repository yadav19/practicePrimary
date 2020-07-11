#include<bits/stdc++.h>
using namespace std;

bool check(vector<bool> &C)
{
    for(auto i:C) if(i==false) return true;
    return false;
}

int mindist(vector<int> &D,vector<bool> &S)
{
    int mindistance=INT_MAX,index;
    for(int i=0;i<D.size();i++) if(!S[i] && D[i]<mindistance) mindistance=D[i],index=i;
    return index;
}

int main()
{
    int v,s;
    scanf("%d",&v);//vertices
    
    // vector<vector<int>> G(v,vector<int>(v,0));
    vector<int> D(v,INT_MAX);
    vector<bool> S(v,false);
    
    // for(int i=0;i<v;i++)
    //     for(int j=0;j<v;j++)
    //         cin>>G[i][j];

    int G[v][v] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    cin>>s;
    D[s]=0;
    while(check(S))
    {
        int i=mindist(D,S);
        S[i]=true;
        for(int j=0;j<v;j++) if(G[i][j] && !S[j] && G[i][j]+D[i]<D[j]) D[j]=G[i][j]+D[i];
    }

    for(auto i:D) cout<<i<<" ";cout<<endl;
}