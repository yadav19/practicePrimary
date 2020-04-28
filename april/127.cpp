#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0,c,d;
    scanf("%d",&n);
    vector<int> a(n+1),b(n+1);
    // map<int,int> m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        c = a[i]++;
        d = b[a[i]]++;
        c++,d++;
        if(c*d == i && i!=n)ans = i+1;
        else if(c*d == i-1) ans = i;
    }
    printf("%d\n",ans);
}