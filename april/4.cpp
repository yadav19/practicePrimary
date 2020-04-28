#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> A(n+1,0),B(m+1,0);
    long long result =0;

    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]) A[i]+=A[i-1];
    }
    
    for(int i=1;i<=m;i++)
    {
        cin>>B[i];
        if(B[i]) B[i]+=B[i-1];
    }

    // for(int i: A)   cout<<i<<" ";cout<<endl;
    // for(int i: B)   cout<<i<<" ";cout<<endl;
    
    long long q1,q2;

    for(int i=1;i<=k;i++)
    {
        q1=0;
        q2=0;

        if(k%i == 0)
        {
            for(int j=1;j<=n;j++) if(A[j]>=i) q1++;
            for(int j=1;j<=m;j++) if(B[j]>=k/i) q2++;
        }

        // cout<<i<<" "<<q1<<" "<<q2<<endl;
        result += q1*q2;
    }
    cout<<result<<endl;
    return 0;
}