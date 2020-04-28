#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,f=1;
    scanf("%d",&n);
    vector<int> t(n+1,0);
    for(int i=0;i<n-1;i++)cin>>x>>y,t[x]++,t[y]++;
    for(int i=1;i<=n;i++) if(t[i]==2) f=0;
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}