#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long x,y,k,a,b;
        scanf("%lld%lld%lld",&a,&b,&k);
        x = min(abs(a),abs(b));
        y = max(abs(a),abs(b));
        int mink = y;
        if(k<mink) cout<<-1<<endl;
        else
        {
            long long ans = x + 1ll*((y-x)/2)*2;
            k -= y;
            if((y-x)%2==0)
            {
                ans+=1ll*(k/2)*2;
                if(k%2==1) ans--;
            }
            else ans+=k;
            cout<<ans<<endl;
        }
        
    }
}