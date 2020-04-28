#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long ans=0;
    vector<pair<int,int>> a(n,pair<int,int>());
    for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        int x=1;
        long long a1 = a[i].first;
        for(int j=n-1;j>i&&x<k;j--) if(a[j].second>=a[i].second) a1+=a[j].first,x++;
        cout<<a[i].first<<": "<<a[i].second*a1<<endl;
        ans = max(ans,a1*a[i].second);
    }
    cout<<ans<<endl;

}