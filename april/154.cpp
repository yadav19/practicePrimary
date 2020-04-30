#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ans=0,n;
    map<int,int> m;
    cin>>n;
    string s;    
    for(int _i=0;_i<n;_i++)
    {
        long long nm=0;
        cin>>s;
        for(char ii:s) nm^=1<<(ii-'a');
        ans+=m[nm];
        for(int i=0;i<26;i++) ans+=m[nm^(1<<i)];
        m[nm]++;
    }
    cout<<ans<<endl;
}