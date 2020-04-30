#include<bits/stdc++.h>
using namespace std;
// int f[1002];
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1){cout<<1<<" "<<0<<endl;return 0;}
    map<int,int> f;
    while(n%2==0 && n>1)
    {
        n/=2;
        f[2]++;
    }

    for(int i=3;i<=1000 && n>1;i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            f[i]++;
        }
    }
    vector<int> a;
    if(n>1)
    {
        long long ans1=1;
        for(auto i:f) ans1*=i.first;
        cout<<ans1*n<<" "<<0<<endl;
    }
    else
    {
        long long ans1=1,ans2=0;
        for(auto i:f) ans1*=i.first,a.push_back(i.second);
        float mm = log(*max_element(a.begin(),a.end()))/log(2);
        if(floor(mm) != ceil(mm) || *max_element(a.begin(),a.end())!=*min_element(a.begin(),a.end())) ans2=1;
        cout<<ans1<<" "<<ans2+ceil(mm)<<endl;
    }
}