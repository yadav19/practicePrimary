#include<bits/stdc++.h>
using namespace std;

//1227D1

bool newsort(pair<int,int> &a,pair<int,int> &b)
{
    return a.first<=b.first;
}

int main()
{
    
    int n;
    cin>>n;
    vector<pair<int,int>> a(n,pair<int,int>());
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a.begin(),a.end());

    cout<<"conventional:\n";
    for(auto i:a) cout<<i.second<<" ";cout<<endl;
    for(auto i:a) cout<<i.first<<" ";cout<<endl;
    sort(a.begin(),a.end(),newsort);
    cout<<"NONconventional:\n";
    for(auto i:a) cout<<i.second<<" ";cout<<endl;
    for(auto i:a) cout<<i.first<<" ";cout<<endl;
}

/*
int n,q;
    map<int,vector<array<int,2>>> Ans;
    vector<array<int,2>> A(n,array<int,2>());
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i][0];
        A[i][1]=i;
    }
    for(auto i: A)
        cout<<i[0]<<" "<<i[1]<<endl;
*/