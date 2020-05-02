#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    s = s+s;
    long c=1,ans=1;
    for(int i=1;i<s.size();i++) if(s[i]!=s[i-1]) ans=max(ans,++c); else c=1;
    cout<<min(1ll*ans,1ll*s.size()/2)<<endl;
}
