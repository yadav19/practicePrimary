#include<bits/stdc++.h>
using namespace std;

#define fore(i,s,e) for(int i=s;i<e;i++)

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[2*n],d=0;
        fore(i,0,2*n) {scanf("%d",a+i);}

        d = count(a,a+2*n,1) - count(a,a+2*n,2);

        if(d==0) cout<<0<<endl;
        else if(abs(d)==2*n) cout<<2*n<<endl;
        else
        {
            map<int,int> df;
            df[0]=0;
            int c=0;

            fore(i,n,2*n)
            {
                if(a[i]==1) c++;
                else c--;

                if(!df.count(c)) df[c] = i-n+1;
            }
            int  ans = 2*n;
            c=0;
            for(int i =n-1;i>=0;i--)
            {
                if(a[i]==1) c++;
                else c--;
                if(df.count(d-c)) ans = min(ans,n-i+df[d-c]);
            }

            if (df.count(d)) ans = min(ans,df[d]);
            printf("%d\n",ans);


        }
         
    }
}