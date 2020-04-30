#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    vector<long long> x,y;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++) cin>>a[i];
    cin>>m;
    vector<long long> b(m);
    for(long long i=0;i<m;i++) cin>>b[i];
    
    long long xx=0,yy=0,a1=0,a2=0;
    
    while(xx<n && yy<m)
    {
        a1+=a[xx];a2+=b[yy];
        if(a1==a2){x.push_back(a1);y.push_back(a2);a1=0;a2=0;xx++;yy++;}
        else if(a1>a2){yy++;a1-=a[xx];}
        else{xx++;a2-=b[yy];}
    }

    if(x.size()!=y.size() || xx!=n || yy!=m) cout<<-1<<endl;
    else 
    {
        for(long long i=0;i<x.size();i++) if(x[i]!=y[i]) {cout<<-1<<endl;return 0;}
        cout<<x.size()<<endl;
    }
    
}