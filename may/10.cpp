#include<bits/stdc++.h>
using namespace std;

#define  fore(i,n) for(int i=0;i<n;i++)

int main()
{
    int n;
    scanf("%d",&n);
    vector<int> a(n),b(n);
    fore(i,n) cin>>a[i];
    fore(i,n) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());

    long long ans=0;

    // fore(l,n)
    // {
    //     for(int r=l;r<n;r++)
    //     {
    //         for(int i=l,j=(n-1)-(r-l);i<=r&&j<n;i++,j++) ans+=a[i]*b[j];
    //     }
    // }

    for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
    for(int l=i;l<=j;l++) ans+=a[i]*b[i];

    cout<<ans<<endl;
}
