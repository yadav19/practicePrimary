#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(;t;t--)
    {
        int n,b,m,p=-1,c=0,in;
        scanf("%d%d%d",&n,&b,&m);
        for(;m;m--) 
        {
            scanf("%d",&in);
            if(in/b!=p) c++,p=in/b;
        }
        cout<<c<<endl;
    }
}