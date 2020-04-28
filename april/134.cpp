#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sum=0;
    int n;
    float x;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){cin>>x;a[i]=floor(x);sum+=a[i];}
    
    if(sum!=0)
    for(int i=0;i<n;i++)
    {
        if(sum==0) break;
        sum++;
        a[i]++;
    }
    for(int i:a) cout<<i<<endl;
}