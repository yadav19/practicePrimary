#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x1,x2,x3,x4,y1,y2,y3,y4;
    long long w,b,c1,c2;

    if((n*m)%2) w = (n*m+1)/2,b= m-1;
    else w = (n*m)/2,b=m;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    {
        c2 = abs((x3-x4+1)*(y3-y4+1));
        if(c2%2)
        {
            if(x1%2 == y1%2) w-=(c2+1)/2,b+=(c2+1)/2;
            else w-=c2/2,b+=(c2)/2;
        }
        else b+=c2/2,w-=c2/2;
    }

    if( x3<=x1 && x1<=x4 && y3<=y1 && y1<=y4 )
    {
        int x=x2,y=y2,c1 = (x2-x1+1)*(y2-y1+1);
        if(!(x3<=x2 && x2<=x4 && y3<=y2 && y2<=y4))
        {
            if(x2>x4) x = x4;
            if(y2>y4) y = y4;
            c2 = abs((x-x1+1)*(y-y1+1));
            if((c1-c2)%2)
            {
                if(x1%2 == y1%2) w+=(c1-c2+1)/2,b-=(c1-c2+1)/2;
                else w+=(c1-c2)/2,b-=(c1-c2)/2;
            }
            else b-=c2/2,w-=c2/2;
        } 
    }
    else if(x3<=x2 && x2<=x4 && y3<=y2 && y2<=y4)
    {

    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
}