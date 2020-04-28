#include<bits/stdc++.h>
using namespace std;

bool  sorting(vector<int> a,vector<int> b)
{
    return a[0] - a[1] > b[0] - b[1];
}

int main()
{
    int n,a,b,c;
    long long sum =0,ans=0;
    cin>>n;
    vector<long long> q;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum+=b*n-a;
        q.push_back(a-b);
    }
    sort(q.begin(),q.end());
    for(int i=0;i<n;i++) sum+= q[i]*(n-i);

    cout<<sum<<endl;
}