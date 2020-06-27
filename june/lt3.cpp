#include<bits/stdc++.h>
using namespace std;
int G[100010],A[100010],B[100010],X[100010],Y[100010];
int n;
bool compA(int &a,int &b)
{
    return (1.0*G[a])/A[a]>(1.0*G[b])/A[b];
}
bool compB(int &a,int &b)
{
    return (1.0*G[a])/B[a]>(1.0*G[b])/B[b];
}

void priorityX(int i)
{
    if((1.0*G[X[i]])/A[X[i]]<(1.0*G[X[i*2+1]])/A[X[i*2+1]]) swap(X[i],X[i*2+1]),priorityX(2*i+1);
    else if ((1.0*G[X[i]])/A[X[i]]<(1.0*G[X[i*2+2]])/A[X[i*2+2]]) swap(X[i],X[i*2+2]),priorityX(2*i+2);
}

void priorityY(int i)
{
    if((1.0*G[Y[i]])/B[Y[i]]<(1.0*G[Y[i*2+1]])/B[Y[i*2+1]]) swap(Y[i],Y[i*2+1]),priorityX(2*i+1);
    else if ((1.0*G[Y[i]])/B[Y[i]]<(1.0*G[Y[i*2+2]])/B[Y[i*2+2]]) swap(Y[i],Y[i*2+2]),priorityX(2*i+2);
}

int main()
{
    int t;
    for(cin>>t;t--;)
    {
        cin>>n;
        for(int i=0;i<n;i++)X[i]=i,Y[i]=i;
        for(int i=0;i<n;i++) cin>>G[i]>>A[i]>>B[i];
        // sort(X,X+n,compA);
        // sort(Y,Y+n,compB);
        double ansA=0,ansB=0;
        for(int i=0;i<n;i++)
        {
            ansA+=(1.0*G[i])*B[i]/(A[i]+B[i]);
            ansB+=(1.0*G[i])*A[i]/(A[i]+B[i]);
        }
        cout<<ansA<<" "<<ansB<<endl;
    }
}