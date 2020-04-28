#include<bits/stdc++.h>
using namespace std;

long long arr[(int)2e5+5];

int main()
{
    long long q,n,x,a,y,b,a1,a2,a3,k,sum,i;
    cin>>q;
    for(long long _=0;_<q;_++)
    {
        cin>>n;
        for(long long i=0;i<n;i++) cin>>arr[i],arr[i];
        sort(arr,arr+n,greater<long long>());
        cin>>x>>a>>y>>b>>k;
        k*=100;
        sum=0;a1=0;a2=0;a3=0;

        if(x<y) swap(x,y),swap(a,b);

        for(i=1;sum<k && i<=n;i++)
        {
            if(i%a==0 || i%b==0) sum+=arr[a1++]*y;
            if(i%a==0) sum+=arr[a2++]*(x-y);
            if(i%a==0 && i%b==0) sum+=arr[a3++]*y;
        }

        if(sum<k) cout<<-1<<endl;
        else cout<<i-1<<endl;
    }
}