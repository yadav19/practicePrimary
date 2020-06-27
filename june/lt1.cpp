#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,c=0;
        cin>>s>>n;
        n&0;
        if(s%2)c=1,s--;
        c+=ceil((1.0*s)/n);
        cout<<c<<endl;
    }
}