#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0,f=1;
    for(char c:s) a+=(c=='(');
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
            if(a<n/2) s[i]='(',a++;
            else s[i]=')';
        if(s[i]=='(') b++;
        else b--;
        if(b<0 || (b==0 && i<n-1) || (b!=0 && i==n-1)){f=0;break;}
    }
    if(f) cout<<s<<endl;
    else cout<<":("<<endl;
}
