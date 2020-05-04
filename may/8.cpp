#include<bits/stdc++.h>
using namespace std;

bool sorting(pair<int,int> a,pair<int,int> b)
{
    if(a.first>b.first) return true;
    else if(a.first == b.first) return a.second>b.second;
    else return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    vector<pair<int,int>> a(4*n+1,pair<int,int>());
    for(int i=0;i<4*n+1;i++) cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end(),sorting);
    int mx = a[0].first,my=a[0].second;
    for(int i =1;i<4*n+1;i++)
    if((a[i].first!= mx && a[i].first!=0)||(a[i].second!=my&&a[i].second!=0)){cout<<a[i].first<<" "<<a[i].second<<endl;break;}
    // cout<<mx<<my<<endl;

}