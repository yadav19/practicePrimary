#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,c,m,o;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d%d%d",&c,&m,&o);
        if(c==0 || m==0) printf("0\n");
        else if(c+m+o<3) printf("0\n");
        else if(min(c,m)*3<=(c+m+o)) printf("%d\n",min(c,m));
        else printf("%d\n",(c+m+o)/3);
    }
}