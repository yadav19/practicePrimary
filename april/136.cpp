#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=1;
    long long ans=0,ss=0,nn;
    string s;
    cin>>n;
    vector<long long> a(1,1);
    for(int _=0;_<n;_++)
    {
        cin>>s;
        if(s=="add") ans+=a[ss];
        else if(s =="end") a.pop_back(),ss--;
        else
        {
            cin>>nn;
            a.push_back(min(4294967296,nn*a[ss]));
            ss++;
        }
        if(ans>=4294967296){cout<<ans;f=0;break;} 
    }
    if(f) cout<<ans<<endl;
    else cout<<"OVERFLOW!!!"<<endl;
}