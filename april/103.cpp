#include<bits/stdc++.h>
using namespace std;
int a[(int)2e5+5];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    long long ans=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
        if(ans)
            for(int j=0;j<i;j++) (ans*=abs(a[i]-a[j]))%=m;
    }
    cout<<ans<<endl;
}