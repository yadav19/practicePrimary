#include<bits/stdc++.h>
using namespace std;
#define fore(i,s,e) for(int i=s;i<e;i++)

int main()
{
    int n;
    string s;
    cin>>n;
    vector<int> a(n);

    fore(i,0,n) cin>>a[i];
    cin>>s;
    int m=0,ii=0;
    int ans=1;
    fore(i,0,n-1)
    {
        if(a[i]<=ii) ans=0;
        if(s[i]=='0')
        {
            if()
            ii=i+1;
            if(a[i]>ii) ans=0;
        }
        
    }
    if(a[n-1]<=ii) ans=0;
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}