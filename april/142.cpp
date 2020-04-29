#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,flag=1;
        long long ans=0;
        cin>>n;
        vector<int> p(n+1),s(n+1,0),a(n+1,1000000000);
        p[1]=1;
        for(int i=2;i<=n;i++) cin>>p[i];
        for(int i=1;i<=n;i++) 
        {
            cin>>s[i];
            if(s[i]!=-1&&i!=1)
            if(a[p[i]]!=0) a[p[i]] = min(a[p[i]],s[i]-s[p[p[i]]]);
            else a[p[i]] = s[i]-s[p[p[i]]];
        }
        a[1]=s[1];
        a[0]=0;
        for(int i=2;i<=n;i++)
        {
            if(s[i]!=-1)
            {
                if(s[i]-s[p[p[i]]]<0){flag=0;break;}
                else a[i] = s[i]-s[p[i]];
            }
        }
        if(flag)
        {
            for(int i:a) ans+=i;
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;
        
}