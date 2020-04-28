#include<bits/stdc++.h>
using namespace std;
int n,k,c[(int)2e5+5],s[(int)2e5+5],ans=(int)2e5+9,x,cc;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        cc = 0;
        scanf("%d",&x);
        while(x)
        {
            s[x]+=cc;
            c[x]++;
            x = x>>1;
            cc++;
        }
    }

    for(int i=1;i<=(int)2e5+1;i++) if(c[i]>=k) ans = min(ans,s[i]-max(0,c[i]-k));
    cout<<ans<<endl;
}