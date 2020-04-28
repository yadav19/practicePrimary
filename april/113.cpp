#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h,n;
    scanf("%d",&t);
    for(int _t=0;_t<t;_t++)
    {
        scanf("%d%d",&h,&n);
        int hill[h+1],p;
        memset(hill,1,sizeof(hill));
        for(int i=0;i<n;i++) cin>>p;
        
        if(h-n>0) printf("%d\n",h-n-1);
        else printf("%d\n",0);
    }

}