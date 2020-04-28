#include<bits/stdc++.h>
using namespace std;

bool sorting(pair<int,int> &a,pair<int,int> &b)
{
    return (a.first - a.second)>(b.first-b.second);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int _t=0;_t<t;_t++)
    {
        int n,h,x,y;
        long long ans=1;
        scanf("%d%d",&n,&h);
        vector<pair<int,int>> a(n,pair<int,int>());
        for(int _n=0;_n<n;_n++) scanf("%d%d",&a[_n].first,&a[_n].second);
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        x = a[0].first;
        if(h>x)
        {
            sort(a.begin(),a.end(),sorting);
            y = a[0].first-a[0].second;
            if(y<=0) ans =-1;
            else
            {
                h = h-x;
                ans =ceil((1.0*h)/y) + 1;
            }
        }
        cout<<ans<<endl;
    }
}