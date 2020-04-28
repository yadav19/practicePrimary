#include<bits/stdc++.h>
using namespace std;
long long A[(int)1e5+1];
long long B[(int)1e5+1];
int main()
{
    long long  n,x;
    cin>>n;
    long long ans = 1;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        A[x]++;
        B[A[x]]++;
        if(A[x]*B[A[x]] == i && i!=n) ans=i+1;
        else if(A[x]*B[A[x]] == i-1) ans=i;
    }

    cout<<ans<<endl;
}