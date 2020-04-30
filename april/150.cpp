#include<bits/stdc++.h>
using namespace std;
int n,k,ians=1;
map<int,int> a;
bool can(int n)
{
    int cnts=0;

    for(auto i:a)
        if(i.second>=n) cnts+=i.second/n;
    
    if(cnts >= k)
    {
        ians = n;
        return true;
    }
    return false;
}

int main()
{
    int x;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) cin>>x,a[x]++;
    int l= 0, r=n,mid;
    while(r-l>1)
    {
        mid = (r+l)/2;
        if(can(mid)) l = mid;
        else r = mid;
    }
    x = k;
    for(auto i: a) for(int j=0;j<i.second/ians && x;j++) cout<<i.first<<" ",--x;
    cout<<endl;
        
}