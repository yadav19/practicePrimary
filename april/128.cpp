#include<bits/stdc++.h>
using namespace std;

int tower[(int)2e5+9],x,h;
int need = (int)1e9;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ++tower[x];
        h = max(h,x);
        need = min(need,x);
    }

    int pos = (int)2e5+8;
    long long sum=0,c=0,ans=0;
    while(true)
    {
        long long x = sum - c*1ll*(pos-1);
        if(x>k)
        {
            ans++;
            h = pos;
            sum = pos*1ll*c;
        }
        pos--;
        if(pos == need) break;
        c+=tower[pos];
        sum+=tower[pos]*1ll*pos;
    }
    if(h!=need) ans++;
    cout<<ans<<endl;
}